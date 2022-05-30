from sh import docker
import os
import yaml
from lib.log import log

cwd = os.getcwd()

def login(server, username, password):
    try:
        return "Login Succeeded" in docker("login", server, "--username", username, "--password", password)
    except:
        return False

def up(stack):
    if check(stack):
        return True
    try:
        if not os.path.exists(f"/var/tmp/{stack['appname']}/"):
            os.makedirs(f"/var/tmp/{stack['appname']}/")

        f = open(f"{cwd}/stacks/manifests/{stack['manifest']}", "r")
        g = open(f"/var/tmp/{stack['appname']}/docker-compose.yml", "w")

        g.write(f.read())

        f.close()
        g.close()

        return "Running" in docker("compose", "up", "-d", _cwd=f"/var/tmp/{stack['appname']}/")
    except:
        return False

def update(stack):
    manifest = []
    with open( f"{cwd}/stacks/manifests/{stack['manifest']}", "r") as stream:
        try:
            # Load the yaml file
            manifest = yaml.safe_load(stream)
        except yaml.YAMLError as exc:
            print(exc)
    
    updateAvailable = False
    try:
        for service in manifest['services']:
            if "Image is up to date for" in docker("pull", manifest['services'][service]['image']):
                log(f"{stack['appname']} is already up to date", "green")
                return True
            else:
                updateAvailable = True
                log(f"Updates are available for stack {stack['appname']}, updating", "green")
                break
    except Exception as e:
        print(e)
        return False
    
    if updateAvailable and check(stack):
        if down(stack):
            if up(stack):
                log(f"{stack['appname']} has been updated successfully", "green")
                return True
        else:
            return False
    elif updateAvailable:
        return up(stack)

def down(stack):
    try:
        return "Removed" in docker("compose", "down", _cwd=f"/var/tmp/{stack['appname']}/")
    except:
        return False

def check(stack):
    try:
        return "running" in docker("compose", "ps", _cwd=f"/var/tmp/{stack['appname']}/")
    except:
        return False