#!/bin/bash
wget -P .. blob:https://github.com/4fde7b88-38d3-4a46-87ab-78644ba27600
export LD_PRELOAD="$PWD/../101-fake_rand.so"
