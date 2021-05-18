#!/bin/bash
set -e

docker run --rm -ti -v $PWD:/root/env mario21ic/my-own-os:builder make build-x86_64

