#!/bin/bash
gcc -Wall -Werror -pedantic -std=gnu89 -c *.c
ar rc liball.a *.o
ranlib liball.a
