from sh import git, echo
import sh
import os
import yaml
import shutil

# Get the current working directory
cwd = os.getcwd()

# Function to generate an ssh keypair in the .ssh folder
def gen_key():
    # Check if the folder is already there, if so we do not need to generate the key
    if not os.path.exists(f"{cwd}/.ssh/"):
        try:
            os.makedirs(f"{cwd}/.ssh/")
        except:
            return False

    # Create a function to run the ssh-keygen command because python functions can't have dashes
    keygen = sh.Command("ssh-keygen")

    # Run the keygen command and tell it to output to the .ssh folder in the working directory
    try:
        keygen("-t", "rsa", "-q", "-f", f"{cwd}/.ssh/id_rsa")
        return True
    except:
        return False

# Function to clone the configuration from the git repository as stated in config.yml
def clone_config():
    if os.path.exists(f"{cwd}/config/"):
        shutil.rmtree(f"{cwd}/config/")
    try:
        # Open the config.yml file and read it
        f = open(f"{cwd}/config.yml")
        config = yaml.safe_load(f.read())
        f.close()
        # Clone the repository using the ssh keys from .ssh and the repo from config.yml
        git.clone(config['repo-ssh-url'], f"{cwd}/config", _env={"GIT_SSH_COMMAND": f"ssh -i {cwd}/.ssh/id_rsa"})
        return True
    except Exception as e:
        print(e)
        return False

# Function to update the config
def update_config():
    try:
        # Return true if the cloned repo has been updated
        return "Already up to date." not in git.pull(_cwd=f"{cwd}/config", _env={"GIT_SSH_COMMAND": f"ssh -i {cwd}/.ssh/id_rsa"})
    except:
        return False
