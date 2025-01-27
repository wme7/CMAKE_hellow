#!bin/bash

# Build with OpenMP
mkdir build && cd build
cmake ..
make

# Build without OpenMP
mkdir build && cd build
cmake -DCMAKE_DISABLE_FIND_PACKAGE_OpenMP=true ..
make