import yaml
import os
from lib.compose import check, up, update, login
import lib.schedule
from time import sleep
from lib.log import log
import lib.git as git
import asyncio
cwd = os.getcwd()

def login_registries():
    try:
        # Open the config to get registry authentication
        f = open(f"{cwd}/config.yml")
        log("Logging into docker registries...", "white")
        # Load the registries from yaml
        registries = yaml.safe_load(f.read())['registries']
        # Close the file
        f.close()

        # Iterate through each registry
        for registry in registries:
            # Try to log in
            if login(registry, registries[registry]['username'], registries[registry]['password']):
                log(f"Logged into {registry} successfully", "green")
            # If the login failed, alert the user
            else:
                log(f"Error logging into {registry}", "red")

    # In case of miscellaneous errors, alert the user
    except Exception as e:
        print(e)
        log("Error logging into docker registries", "red")

def load_stacks():
    # Create an empty array of stack objects
    stacks = []
    # Iterate through the manifests in the directory
    for filename in os.listdir(cwd + "/config/stacks/"):
        # Check if it is a yaml file
        if filename.endswith(".yml") or filename.endswith(".yaml"):
            # Open the file
            with open( f"{cwd}/config/stacks/{filename}", "r") as stream:
                try:
                    # Load the yaml file
                    stack = yaml.safe_load(stream)
                except yaml.YAMLError as exc:
                    log(exc)
            # Append the stack to the array
            stacks.append(stack)
    for stack in stacks:
        try:
            stack['priority']
        except:
            stack['priority'] = 9999
    stacks.sort(key=lambda x: int(x['priority']), reverse=False)
    return stacks

def initialize_stacks(stacks):
    for stack in stacks:
        
        log(f"Updating stack {stack['appname']}...", "white")
        update(stack, True)
        
        if check(stack):
            log(f"Stack {stack['appname']} has been started", "green")
        else:
            log(f"Error starting stack {stack['appname']}", "red")

        log(f"Scheduling updates for stack {stack['appname']}", "white")
        try:
            # Interval updates
            if stack["updates"]["type"] == "interval":
                    log(f"{stack['appname']} scheduled to update every {stack['updates']['interval']} seconds", "green")
            else:
                log(f"Malformed or no schedule configuration for stack {stack['appname']}. Updates will not be scheduled.", "red")
        except:
            # If there is malformed or no schedule config
            log(f"Malformed or no schedule configuration for stack {stack['appname']}. Updates will not be scheduled.", "red")

if __name__ == "__main__":

    # Clone the config / check if it exists
    if git.clone_config():
        # Log into registries
        login_registries()
        # Update the config if it is not updated already
        git.update_config()
        stacks = load_stacks()
        initialize_stacks(stacks)

        loop = asyncio.new_event_loop()
        loop.run_until_complete(lib.schedule.runJobs())
        loop.close()
        log("Scheduler has been started", "green")
        
        try:
            # Pull the git repo every 5 seconds
            while True:
                sleep(5)
                # In the case that there are changes pulled, reload the stacks.
                updated = git.update_config()
                updatedStacks = []
                # Load all of the stacks, we repeat this because new stacks were created in the process
                allStacks = load_stacks()

                # Iterate through the updated stacks 
                for updatedStack in updated: 
                    try:
                        # Try to open the stack config file
                        f = open(f"{cwd}/config/stacks/{updatedStack}")
                        stack = yaml.safe_load(f.read())
                        f.close()
                        if stack not in updatedStacks:
                            updatedStacks.append(stack)
                    except:
                        # If it gets here, it means it's not a stack config but rather a manifest (yes, there are better ways to do this but this one is easy)
                        try:
                            # Iterate through all of the stacks
                            for stackfile in allStacks:
                                # Check if it uses the current file being looked at as a manifest
                                if stackfile['manifest'] == stack:
                                    # If so, add that stack to the ones to update
                                    updatedStacks.append(stack)
                        except:
                            log("Error updating stack from git repo", "red")

                # Initialize all of the stacks that have been changed
                initialize_stacks(updatedStacks)
        except (KeyboardInterrupt, SystemExit):
            pass

    else:
        log("config is missing or malformed", "red")
