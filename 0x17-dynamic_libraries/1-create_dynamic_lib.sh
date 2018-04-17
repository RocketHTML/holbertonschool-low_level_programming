#!/bin/bash
gcc -Wall -fpic -c *.c
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
