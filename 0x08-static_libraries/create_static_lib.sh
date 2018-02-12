#!/bin/bash
mkdir madtmp
cd madtmp
gcc -c ../*.c
ar rc liball.a *.o
mv liball.a ..
cd ..
rm -r madtmp
