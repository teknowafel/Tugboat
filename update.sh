#!/bin/bash

# Install depedencies for debian
apt-get update && apt-get install -y \
rsync

# Remove old stuff
rm -r /opt/tugboat
rm /usr/bin/tugboat

# Create the log file and give permissions to write to it
touch /var/log/tugboat && chmod 666 /var/log/tugboat

mkdir -p /opt/tugboat

mkdir -p /var/opt/tugboat/
chmod -R 666 /var/opt/tugboat/

# Clone tugboat source into /opt/tugboat and make a symlink so it can be executed conveniently
curl https://raw.githubusercontent.com/teknowafel/Tugboat/main/tugboat > /opt/tugboat/tugboat
chmod +x /opt/tugboat/tugboat
ln -s /opt/tugboat/tugboat /usr/bin/tugboat