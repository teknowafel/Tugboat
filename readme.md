## Tugboat
***GitOps for Docker***  
*The simple way to keep things up to date*

### What does it do?
Tugboat is GitOps CD for Docker. In short, this means that it will take your latest configuration from a git repository and reflect those changes on your running Docker instance using the Docker socket.

### Make a config repo

Create a repo on GitHub (or wherever) for your config. Arrange it as such:
```
stacks/
  | some-app.yml
  | manifests/
    | some-app-manifest.yml
```

To create an app's configuration yaml:
```yml
# The name of the app/stack
appname: some-app
manifest: some-app-manifest.yml

# When the app should update
updates:
    # Type of update. Current supported types: interval (cron and webhook coming soon)
    type: interval
    # The interval in seconds
    interval: 5
```
That's it! One small caveat though; *You can't give the manifest the same filename as the configuration yaml.* This is due to how Tugboat processes updates. *(see lines 73-90 in main.py)*  

It is also important to keep in mind that changing the name of a stack will almost guarantee an error, as when Tugboat tries to create the new stack, it will not be able to bind ports as the old stack will still be running. To fix this issue, you must manually remove the old stack first.

### Configuration
This part is simple:
```yml
# config.yml
repo-url: https://<USERNAME>:<PERSONAL_ACCESS_TOKEN>@github.com/<USERNAME>/<CONFIG_REPO>.git

# Add authentication for registries
registries:
  # Put the registry domains here (eg. ghcr.io for GitHub Container Registry)
  ghcr.io:
    username: <USERNAME>
    password: <PASSWORD>
```

### Installation
This part is simpler:
```
docker run --name tugboat -v /path/to/config.yml:/config.yml -v /var/run/docker.sock:/var/run/docker.sock ghcr.io/teknowafel/tugboat
```

### 🎉 Congrats! 🎉
Give yourself a pat on the back. You deserve it.
