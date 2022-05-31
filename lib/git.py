from sh import git, echo
import sh
import os
import yaml

cwd = os.getcwd()

def gen_key():
    if not os.path.exists(f"{cwd}/.ssh/"):
        try:
            os.makedirs(f"{cwd}/.ssh/")
        except:
            return False

    keygen = sh.Command("ssh-keygen")

    try:
        keygen("-t", "rsa", "-q", "-f", f"{cwd}/.ssh/id_rsa", "-N", '""')
        return True
    except:
        return False

def clone_config():
    try:
        agent = sh.Command("ssh-agent")
        f = open(f"{cwd}/config.yml")
        config = yaml.safe_load(f.read())
        f.close()

        agent("sh", "-c", f"'ssh-add {cwd}/.ssh/id_rsa; git clone {config['repo-ssh-url']} {cwd}/config'")
    except Exception as e:
        print(e)
        return False
