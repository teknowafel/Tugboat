# Tugboat
*The easy way to keep it up to date*  

Tugboat helps you keep your docker apps up to date using the power of *docker compose* in conjunction with cron.

## Features
* Update a stack
* Start a stack
* Stop a stack
    * You can also apply all of these operations to all stacks at once for convenience

Tugboat installs as a command on your docker host and features simple syntax.

## Installation
You'll need:
* Sudo privelleges
* To be in the docker group (on any user where you'll be running a crontab)
* The Docker container engine along with the docker compose plugin.  

Once you have all of that, it takes just one command to install Tugboat.
```
curl https://raw.githubusercontent.com/teknowafel/Tugboat/main/update.sh | sudo bash
```
*This command can be run again to update Tugboat should there be a new update*

## Setup

### Stacks
Stacks are stored in /etc/tugboat/stacks, or optionally in a git repository in the /stacks directory.

### GitOps configuration (optional)
Tugboat supports the use of a git repository for storing configuration, and if GitOps is enabled, Tugboat will automatically pull the configuration periodically. Git needs to be configured to have permission to pull from the configuration repository. The recommended method for ensuring this is using an ssh public key. For Tugboat to use your git repository for configuration, add a cronjob like this (when to update is for you to decide)

```
0 * * * * tugboat update-config git@github.com:teknowafel/tugboat-config.git
```
*"git@github.com:teknowafel/tugboat-config.git"* can be replaced with the URL to your own configuration repo.

## Use
Tugboat's primary use case is in a cronjob like so
```
* * * * * tugboat update test
```
This way, updates can be automatically run using Linux's most powerful scheduling tool available. Tugboat also features various other commands.  

## Syntax
```
tugboat {start|stop|update|logs} {stack_name|all|clear(for logs)}
```
Stacks are pulled from /etc/tugboat/stacks or the git repo where you store your configuration.