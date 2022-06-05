FROM alpine:latest

WORKDIR /

RUN apk add --update --no-cache python3 py3-pip docker docker-compose git openssh openssh-keygen tzdata

ENV TZ=America/New_York

COPY requirements.txt .

RUN pip install -r requirements.txt

COPY . .

CMD ["python3", "main.py"]
