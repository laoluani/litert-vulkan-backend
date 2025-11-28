#!/bin/bash

NDK_PATH=${ANDROID_NDK_HOME} 

if [ -z "$NDK_PATH" ]; then
    echo "ANDROID_NDK_HOME environment variable is not set."
    exit 1
fi

# TODO Check android platform version to match litert
${ANDROID_SDK_ROOT}/cmake/3.22.1/bin/cmake -S . -B build \
  -DCMAKE_TOOLCHAIN_FILE=$NDK_PATH/build/cmake/android.toolchain.cmake \
  -DANDROID_ABI=arm64-v8a \
  -DANDROID_PLATFORM=android-29 \
  -DANDROID_STL=c++_shared

${ANDROID_SDK_ROOT}/cmake/3.22.1/bin/cmake --build build -- -j8
