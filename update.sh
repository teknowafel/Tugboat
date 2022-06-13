#!/bin/bash
apt-get update && apt-get install -y \
rsync \
git

rm -r /opt/tugboat/
rm /usr/bin/tugboat
touch /var/log/tugboat && chmod 666 /var/log/tugboat
git clone https://github.com/teknowafel/Tugboat /opt/tugboat
ln -s /opt/tugboat/tugboat /usr/bin/tugboat