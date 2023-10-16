#!/bin/bash
gcc -fPIC -c *.c
export LD_PRELOAD="$PWD/../101-fake_rand.so"
