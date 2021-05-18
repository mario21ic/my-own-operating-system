#!/bin/bash
set -e

docker build -t mario21ic/my-own-os:builder buildenv/
docker run --rm -ti -u $(id -u):$(id -g) -v $PWD:/build/env mario21ic/my-own-os:builder make build-x86_64

