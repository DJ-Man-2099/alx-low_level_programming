#!/bin/bash
wget -P .. "https://github.com/DJ-Man-2099/alx-low_level_programming/blob/main/0x18-dynamic_libraries/101-fake_rand.so"
export LD_PRELOAD="$PWD/../101-fake_rand.so"
