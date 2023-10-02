#!/bin/bash
gcc -Wall pedantic -Werror -Wextra -C *.C
gcc -c *.c
ar -rcs liball.a *.o
