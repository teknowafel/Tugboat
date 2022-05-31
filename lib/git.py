from sh import git
import sh
import os

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
    except:
        return False

#TODO
#def clone_config():
#    os.putenv("GIT_SSH_COMMAND", f"ssh -i {cwd}/.ssh/id_rsa -F /dev/null")