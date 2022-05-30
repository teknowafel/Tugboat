from apscheduler.schedulers.background import BackgroundScheduler
import yaml
import os
from lib.compose import check, up, update
import lib.schedule
from time import sleep
cwd = os.getcwd()

def load_stacks():
    # Create an empty array of stack objects
    stacks = []
    # Iterate through the manifests in the directory
    for filename in os.listdir(cwd + "/repo/stacks/"):
        # Check if it is a yaml file
        if filename.endswith(".yml") or filename.endswith(".yaml"):
            # Open the file
            with open( f"{cwd}/repo/stacks/{filename}", "r") as stream:
                try:
                    # Load the yaml file
                    stack = yaml.safe_load(stream)
                except yaml.YAMLError as exc:
                    print(exc)
            # Append the stack to the array
            stacks.append(stack)
            print(f"Loaded stack from {filename}")

    return stacks

def initialize_stacks(stacks, scheduler):
    for stack in stacks:
        # Check if the stack is up
        if check(stack):
            print(f"Stack {stack['appname']} is already up")
        else:
            # Alert the user that the stack is not up
            print(f"Stack {stack['appname']} is not up, starting...")
            # Start the stack
            up(stack)
            
            if check(stack):
                print(f"Stack {stack['appname']} has been started")
            else:
                print(f"Error starting stack {stack['appname']}")

        print(f"Scheduling updates for stack {stack['appname']}")
        try:
            # Interval updates
            if stack["updates"]["type"] == "interval":
                lib.schedule.schedule_interval(stack, scheduler, stack["updates"]["interval"])
                print(f"{stack['appname']} scheduled to update every {stack['updates']['interval']} seconds")
            # Cron updates
            elif stack["updates"]["type"] == "cron":
                lib.schedule.schedule_cron(stack, scheduler, stack["updates"]["expression"])
                print(f"{stack['appname']} scheduled to update at {stack['updates']['expression']} seconds")
        except:
            # If there is malformed or no schedule config
            print(f"Malformed or no schedule configuration for stack {stack['appname']}. Updates will not be scheduled.")
    
    # Start the scheduler
    scheduler.start()
    print("Scheduler has been started")


if __name__ == "__main__":
    stacks = load_stacks()
    scheduler = BackgroundScheduler()
    initialize_stacks(stacks, scheduler)

    try:
        # This is here to simulate application activity (which keeps the main thread alive).
        while True:
            sleep(5)
    except (KeyboardInterrupt, SystemExit):
        # Not strictly necessary if daemonic mode is enabled but should be done if possible
        scheduler.shutdown()

