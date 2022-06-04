from sh import docker
import os
import yaml
from lib.log import log

# Get the current working directory
cwd = os.getcwd()

# Function to log in to a server
def login(server, username, password):
    try:
        # Return true if the login was successful
        return "Login Succeeded" in docker("login", server, "--username", username, "--password", password)
    except:
        return False

# Function to bring a stack up
def up(stack):
    if check(stack):
        # Return true if the stack is already up
        try:
            down(stack)
            up(stack)
        except:
            return False
    try:
        # Make the folder for the stack in /var/temp if it is not there
        if not os.path.exists(f"/var/tmp/tugboat/{stack['appname']}/"):
            os.makedirs(f"/var/tmp/tugboat/{stack['appname']}/")

        # Open the stack's manifest and copy it to /var/tmp
        f = open(f"{cwd}/config/stacks/manifests/{stack['manifest']}", "r")
        g = open(f"/var/tmp/tugboat/{stack['appname']}/docker-compose.yml", "w")

        g.write(f.read())

        f.close()
        g.close()

        # Return true if the stack has been started successfully
        return "Running" in docker("compose", "up", "-d", _cwd=f"/var/tmp/tugboat/{stack['appname']}/")
    except Exception as e:
        return False

# Function to update a tack
def update(stack, force):
    # Create an empty variable for the stack's manifest
    manifest = []
    with open( f"{cwd}/config/stacks/manifests/{stack['manifest']}", "r") as stream:
        try:
            # Load the yaml manifest file
            manifest = yaml.safe_load(stream)
        except yaml.YAMLError as exc:
            print(exc)
    
    # Create a variable for later use to track whether or not an update is availabe
    updateAvailable = False
    if not force:
        try:
            for service in manifest['services']:
                # Check if the image is up to date
                if "Image is up to date for" in docker("pull", manifest['services'][service]['image']):
                    pass
                else:
                    updateAvailable = True
                    log(f"Updates are available for stack {stack['appname']}, updating", "green")
                    break

        except:
            return False
    
    else:
        updateAvailable = True

    # If there is not an update available, tell the user
    if not updateAvailable:
        log(f"{stack['appname']} is already up to date", "green")
        return True

    # In the case that the stack is up and there are updated images, bring it down and back up and then alert the user
    if updateAvailable and check(stack):
        if down(stack):
            if up(stack):
                log(f"{stack['appname']} has been updated successfully", "green")
                return True
        else:
            return False
    # In the case that there are updates available and the stack is not up, there is no need to bring it down
    elif updateAvailable:
        if up(stack):
            log(f"{stack['appname']} has been updated successfully", "green")
            return True

# Function to bring down a stack
def down(stack):
    try:
        # Return true if the stack was brought down successfully
        docker("compose", "down", _cwd=f"/var/tmp/tugboat/{stack['appname']}/")
        return True
    except Exception as e:
        return False

# Function to check if a stack is up
def check(stack):
    try:
        # Return true if the stack is running
        return "running" in docker("compose", "ps", _cwd=f"/var/tmp/tugboat/{stack['appname']}/")
    except:
        return False