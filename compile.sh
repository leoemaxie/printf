#!/bin/bash

gcc -c *.c
ar -rcs libprintf.a *.o
rm *.o
