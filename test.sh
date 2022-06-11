docker run \
    --name tugboat \
    -v /var/run/docker.sock:/var/run/docker.sock \
    -v /home/sam/Documents/GitHub/Tugboat/stacks/:/stacks \
    -v /home/sam/Documents/GitHub/Tugboat/config:/config \
    tugboat