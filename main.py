import yaml
import os
from stacklib import check
cwd = os.getcwd()

def load_stacks():
    # Create an empty array of stack objects
    stacks = []
    # Iterate through the manifests in the directory
    for filename in os.listdir(cwd + "/stacks/"):
        # Check if it is a yaml file
        if filename.endswith(".yml") or filename.endswith(".yaml"):
            # Open the file
            with open( f"{cwd}/stacks/{filename}", "r") as stream:
                try:
                    # Load the yaml file
                    stack = yaml.safe_load(stream)
                except yaml.YAMLError as exc:
                    print(exc)
            # Append the stack to the array
            stacks.append(stack)
            print(f"Loaded stack from {filename}")

    #client.containers.run("hello-world")
    return stacks

if __name__ == "__main__":
    stacks = load_stacks()
    for stack in stacks:
        with open( f"{cwd}/stacks/manifests/{stack['manifest']}", "r") as stream:
            try:
                # Load the yaml file
                manifest = yaml.safe_load(stream)
            except yaml.YAMLError as exc:
                print(exc)
        print(manifest)
        print(check(manifest))
