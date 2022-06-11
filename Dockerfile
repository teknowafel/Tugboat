FROM debian:bullseye-slim

USER root

WORKDIR /

RUN apt-get update && apt-get install -y \
    ca-certificates \
    curl \
    gnupg \
    lsb-release

RUN mkdir -p /etc/apt/keyrings

RUN curl -fsSL https://download.docker.com/linux/debian/gpg | gpg --dearmor -o /etc/apt/keyrings/docker.gpg

RUN echo \
  "deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.gpg] https://download.docker.com/linux/debian \
  $(lsb_release -cs) stable" | tee /etc/apt/sources.list.d/docker.list > /dev/null

RUN apt-get update && apt-get install -y \
    docker-ce \
    docker-ce-cli \
    containerd.io \
    docker-compose-plugin \
    git \
    rsync \
    mcron

COPY update.sh /bin/update

COPY config /root/.cron/job.vixie

COPY bootstrap.sh /bootstrap.sh

RUN chmod 0775 /bin/update

RUN touch /var/log/tugboat

RUN chmod +x /bin/update

CMD sh /bootstrap.sh