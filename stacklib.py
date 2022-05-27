from copyreg import constructor
import docker
client = docker.from_env()

def check(stack):
    up = False
    for container in stack["services"]:
        try:
            client.containers.get(container["container_name"])
            up = True
        except:
            return False

    for network in stack["networks"]:
        try:
            client.networks.get(network["name"])
            up = True
        except:
            return False

def up(stack):
