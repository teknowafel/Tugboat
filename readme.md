# Tugboat
*The easy way to keep it up to date*  

Tugboat helps you keep your docker apps up to date using the power of *docker compose* in conjunction with cron.

## Features
* Update a stack
* Start a stack
* Stop a stack

Tugboat installs as a command on your docker host and features simple syntax.

## Installation
You'll need:
* Debian Linux (tested on bullseye, should work on most previous versions)
* Sudo privelleges
* To be in the docker group (on any user where you'll be running a crontab)
* The Docker container engine along with the docker compose plugin.  

Once you have all of that, it takes just one command to install Tugboat.
```
curl https://raw.githubusercontent.com/teknowafel/Tugboat/main/update.sh | sudo bash
```
*This command can be run again to update Tugboat should there be a new update*

## Setup
Place your docker compose files for your stacks in the `~/.tugboat/stacks` directory, or in the `/share` directory of your configuration repository. Edit your user's crontab to automatically update/start/stop your stacks and (optionally) config.
```
#/etc/crontab

0 * * * * tugboat update-config git@github.com:teknowafel/tugboat-config.git

* * * * * tugboat update test
```
*Editing /etc/crontab directly is not recommended*

*Note: docker compose files must end in `.yml` and not `.yaml`*  

You're pretty much done now. To view Tugboat's logs, run `tugboat logs`. You can clear the logs using `tugboat logs clear`.

### Stacks
Stacks are stored in ~/.tugboat/stacks, or optionally in a git repository in the /stacks directory.

### GitOps configuration (optional)
Tugboat supports the use of a git repository for storing configuration, and if GitOps is enabled, Tugboat will automatically pull the configuration periodically. Git needs to be configured to have permission to pull from the configuration repository. The recommended method for ensuring this is using an ssh public key. For Tugboat to use your git repository for configuration, add a cronjob like this (when to update is for you to decide)

```
0 * * * * tugboat update-config git@github.com:teknowafel/tugboat-config.git
```
`"git@github.com:teknowafel/tugboat-config.git"` can be replaced with the URL to your own configuration repo.  

*Note: if you are using an ssh key to clone the repository, you may need to run `tugboat update-config` once manually to verify the authenticity of `github.com`. This should be a one-time process.*

## Use
Tugboat's primary use case is in a cronjob like so
```
* * * * * tugboat update test
```
This way, updates can be automatically run using Linux's most powerful scheduling tool available. Tugboat also features various other commands.  

## Syntax
```
tugboat {start|stop|update|update-config|logs} {stack_name|repo_url(for update-config)|clear(for logs)}
```
Stacks are pulled from ~/.tugboat/stacks or the git repo where you store your configuration.