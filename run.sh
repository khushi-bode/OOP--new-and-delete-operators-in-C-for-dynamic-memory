#!/bin/bash
# Compile and run on Linux / macOS
g++ -std=c++11 dynamic_memory_new_delete.cpp -o dynamic_memory || exit 1
./dynamic_memory
