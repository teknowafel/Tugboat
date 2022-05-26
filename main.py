import docker
import yaml
client = docker.from_env()

with open("npm.yaml", "r") as stream:
    try:
        print(yaml.safe_load(stream))
    except yaml.YAMLError as exc:
        print(exc)

#client.containers.run("hello-world")