[![Build Status](https://travis-ci.com/SCLOUDFER/RK_TIMP.svg?branch=master)](https://travis-ci.com/SCLOUDFER/RK_TIMP)

## Build
- cmake -H. -B_build -DCMAKE_INSTALL_PREFIX=_install -DBUILD_TESTS=ON
- cmake —build _build —target install

## Test
- cmake —build _build —target test — ARGS=--verbose