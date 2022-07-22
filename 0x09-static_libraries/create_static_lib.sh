#!/bin/bash
gcc -Wall -padentic -Wirror -Wexra -c *.c
ar -rc liball.a *.o
ranlib liball.a
