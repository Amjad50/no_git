#! /bin/sh

mkdir cmake-build-debug 2> /dev/null

cd cmake-build-debug

cmake -DCMAKE_BUILD_TYPE=Debug -G "CodeBlocks - Unix Makefiles" ..
