## Tugboat
*The simple way to keep things up to date*

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
That's it!

### Configuration
This part is simple:
```yml
# config.yml
repo-url: https://<USERNAME>:<PERSONAL_ACCESS_TOKEN>@github.com/<USERNAME>/<CONFIG_REPO>.git
```

### Installation
This part is simpler:
```
docker run --name tugboat -v /path-to-config.yml:/config.yml -v /var/run/docker.sock:/var/run/docker.sock ghcr.io/teknowafel/tugboat
```

### 🎉 Congrats! 🎉
Give yourself a pat on the back. You deserve it.
