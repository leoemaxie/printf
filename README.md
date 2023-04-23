# Printf

## Overview
The C printf function. This program works in a similar way to C printf standard library function contained in `stdio.h`. It handles the following formats:
* %c: a character
* %d: a signed decimal integer
* %e or %E: float or double (in scientific notation)
* %f: float or double (in decimal notation)
* %h: short integer
* %i: integer (in base 10)
* %l: a long integer
* %n: nothing
* %o: unsigned octal
* %p: pointer address
* %s: string of characters
* %u: an unsigned decimal integer
* %x: unsigned hexadecimal
* %%: a literal percent sign

Additionally, it handles its own custom formats:
* %b: a binary number.
* %r: reverse of a string
* %R: encrypts using ROT-13
* %S: string in uppercase and hexadecimal

## TESTING
Grant execute permission to compile.sh through `chmod u+x compile.sh` Run `./compile.sh` from the command line to generate the static library `libprintf.a`. Then `cd` into the test directory and run `gcc *.c
../libprintf.a`

## Authors
* [Leo Emaxie](https://github.com/leoemaxie)
* [Toluwani Ojikutu](https://github.com/Toluwaniojiks)
