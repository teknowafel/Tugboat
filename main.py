import docker
client = docker.from_env()
client.containers.run("ubuntu", "echo hello world")
print(client.containers.list())