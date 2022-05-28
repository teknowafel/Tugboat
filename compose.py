import os
import subprocess as sp
cwd = os.getcwd()

def check(stack):
    print("running" in sp.check_output("docker compose ps", shell=True, cwd=f"/tmp/tugboat/{stack['appname']}/"))
    try:
        return "running" in sp.check_output("docker compose ps", shell=True, cwd=f"/tmp/tugboat/{stack['appname']}/")
    except:
        return False

def up(stack):
    try:
        f = open(f"/tmp/tugboat/{stack['appname']}/docker-compose.yml", "w")
        
        g = open(f"{cwd}/stacks/manifests/{stack['manifest']}", "r")

        f.write(g.read())
        g.close()
        f.close()

        os.chdir(f"/tmp/tugboat/{stack['appname']}/")
        running = sp.check_output("docker compose up -d", shell=True, cwd=f"/tmp/tugboat/{stack['appname']}/").split(" ")[2].split("/")
        if running[0] == running[1]:
            return True
        return False
    except:
        return False

def update(stack):
    try:
        os.chdir(f"/tmp/tugboat/{stack['appname']}/")
        os.system("docker compose down")

        f = open(f"/tmp/tugboat/{stack['appname']}/docker-compose.yml", "w")

        g = open(f"{cwd}/stacks/manifests/{stack['manifest']}", "r")

        f.write(g.read())
        g.close()
        f.close()

        running = sp.check_output("docker compose up -d", shell=True, cwd=f"/tmp/tugboat/{stack['appname']}/").split(" ")[2].split("/")
        if running[0] == running[1]:
            return True
        return False
    except:
        return False
