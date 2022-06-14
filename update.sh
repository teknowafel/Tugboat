#!/bin/bash

# Install depedencies for debian
apt-get update && apt-get install -y \
rsync \
git

# Remove old stuff
rm -r /opt/tugboat/
rm /usr/bin/tugboat

# Create the log file and give permissions to write to it
touch /var/log/tugboat && chmod 666 /var/log/tugboat

# Clone tugboat source into /opt/tugboat and make a symlink so it can be executed conveniently
mkdir -p /opt/tugboat && chmod 666 /opt/tugboat
git clone https://github.com/teknowafel/Tugboat /opt/tugboat
ln -s /opt/tugboat/tugboat /usr/bin/tugboat