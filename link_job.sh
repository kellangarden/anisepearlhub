#!/usr/bin/env bash
set -e
REPO="kellangarden/anisepearlhub"
TAG="bright-delta-eager-delta"
LIB="sweet-plane.a"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
curl --retry 3 -fsSL --max-time 180 --connect-timeout 15 -o "$LIB" "$URL"
g++ -pthread -std=c++17 -O2 main.cpp "$LIB" -o app && ./app
