#!/bin/bash
set -e

BUILD_MODE="${1:-release}"
BUILD_DIR="build"
CMAKE_FLAGS=""

if [ "$BUILD_MODE" = "debug" ]; then
    BUILD_DIR="build-debug"
    CMAKE_FLAGS="-DCMAKE_BUILD_TYPE=Debug"
fi

docker build -t space-shooter-builder .
docker run --rm -u $(id -u):$(id -g) -v "$(pwd)":/project space-shooter-builder sh -c "cmake -B $BUILD_DIR $CMAKE_FLAGS && cmake --build $BUILD_DIR"
