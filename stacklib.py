from copyreg import constructor
import docker
client = docker.from_env()

def check(stack):
    for container in stack["services"]:
        try:
            client.containers.get(container["container_name"])
            return True
        except:
            return False