from sh import git, grep
import sh
import os
import yaml
import shutil

# Get the current working directory
cwd = os.getcwd()

# Function to generate an ssh keypair in the .ssh folder
def gen_key():

    # Create a function to run the ssh-keygen command because python functions can't have dashes
    keygen = sh.Command("ssh-keygen")

    # Run the keygen command and tell it to output to the .ssh folder in the working directory
    try:
        keygen("-t", "rsa", "-q")
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
        git.clone(config['repo-url'], f"{cwd}/config")
        git.remote("set-url", "origin", config['repo-url'], _cwd=f"{cwd}/config")
        return True
    except Exception as e:
        return False

# Function to update the config
def update_config():
    try:
        # Return the files which have been updated
        result = git.pull(_cwd=f"{cwd}/config")
        updated = '\n'.split(grep(".yml", "<<<", f"'{result}'"))
        return updated
    except:
        return False
