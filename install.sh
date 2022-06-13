#!/bin/bash
apt-get update && apt-get install -y \
rsync \
git

git clone https://github.com/teknowafel/Tugboat /opt/tugboat
ln -s /opt/tugboat /usr/bin/tugboat