FROM randomdude/gcc-cross-x86_64-elf

RUN apt-get update && \
    apt-get upgrade -y &&\
    apt-get install -y nasm xorriso grub-pc-bin grub-common

VOLUME /build/env
WORKDIR /build/env
