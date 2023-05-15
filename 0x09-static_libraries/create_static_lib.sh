#!/bin/bash
gcc -Wall -pedantic -Warroor -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
