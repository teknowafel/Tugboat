import docker
client = docker.from_env()

client.containers.run("hello-world")