from apscheduler.schedulers.background import BackgroundScheduler
import yaml
import os
from lib.compose import check, up, update
import lib.schedule
from time import sleep
from lib.log import log
import lib.git as git
cwd = os.getcwd()

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
            log(f"Loaded stack from {filename}", "green")

    return stacks

def initialize_stacks(stacks, scheduler):
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
                lib.schedule.schedule_interval(stack, scheduler)
                log(f"{stack['appname']} scheduled to update every {stack['updates']['interval']} seconds", "green")
        except:
            # If there is malformed or no schedule config
            log(f"Malformed or no schedule configuration for stack {stack['appname']}. Updates will not be scheduled.", "red")

def get_ssh():
    if not os.path.exists(f"{cwd}/.ssh/id_rsa.pub"):
        try:
            git.gen_key()
        except:
            return False

    pubkey = ""
    try:
        f = open(f"{cwd}/.ssh/id_rsa.pub")
        pubkey = f.read()
        f.close()
    except:
        return False

    log(f"If you haven't already added the SSH key for your config repo, copy this public key starting on the next line to create a deploy key WITH WRITE ACCESS, then restart Tugboat. \n {pubkey}", "green")

if __name__ == "__main__":
    # Clone the config / check if it exists
    if git.clone_config():
        # Update the config if it is not updated already
        git.update_config()
        # Generate the ssh key and print it to the console or simply print it if it is already there
        get_ssh()
        stacks = load_stacks()
        scheduler = BackgroundScheduler()
        initialize_stacks(stacks, scheduler)

        # Start the scheduler
        scheduler.start()
        log("Scheduler has been started", "green")
        
        try:
            # Pull the git repo every 5 seconds
            while True:
                sleep(5)
                # In the case that there are changes pulled, reload the stacks.
                if git.update_config():
                    stacks = load_stacks()
                    initialize_stacks(stacks, scheduler)
        except (KeyboardInterrupt, SystemExit):
            # Not strictly necessary if daemonic mode is enabled but should be done if possible
            scheduler.shutdown()
        
        else:
            log("There was an error pulling config from git", "red")

    else:
        log("There was an error cloning the config / missing config from the git repo", "red")
