#!/bin/bash
gcc *.c -fpic
gcc -shared -o liball.so *.o
