#!/bin/bash
wget -p .. https://raw.githubusercontent.com/Shakemboi/alx-low_level_programming/master/0x18-dynamic_libraries/libcrack.so
export LD_PRELOAD="$PWD/../libcrack.so
