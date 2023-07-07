#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gn89 -c *.c
ar -rc liball.a *.i
ranlib liball.a
