FROM ubuntu:latest

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    indi-bin \
    && rm -rf /var/lib/apt/lists/*

EXPOSE 7624

CMD ["indiserver", "-p", "7624", "indi_simulator_ccd"]