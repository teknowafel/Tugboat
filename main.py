import docker
import yaml
import os
client = docker.from_env()
cwd = os.getcwd()

manifests = []
for filename in os.listdir(cwd + "/stacks/manifests/"):
    if filename.endswith(".yml") or filename.endswith(".yaml"):
        with open( f"{cwd}/stacks/manifests/{filename}", "r") as stream:
            manifest = ""
            try:
                manifest = yaml.safe_load(stream)
            except yaml.YAMLError as exc:
                print(exc)
        manifests.append(manifest)

print(manifests)
#client.containers.run("hello-world")