# My own _printf function.

Printf is a C project developed by Holberton School student, it consist in our own
printf function, with the same features of a real printf function of the <stdio.h> library.

## Installation

Clone the [repository](https://github.com/cristian0497/printf.git)

Bash
```
git clone https://github.com/cristian0497/printf.git
```
Compile
```
gcc -Wall -Werror -Wextra -pedantic *.c
```
## Import header
Import holberton.h file in your main.c (located in test folder) if already header is added,
you can ignore this step.
```
#include "holberton.h"
```
Now you can use our printf!

## Usage
The syntax it's similar to printf function in C programming language.

Print character:
```
_printf("%c", 'A');
```

Print string:
```
_printf("%s", 'loap');
```

Print decimal:
```
_printf("%d", 23);
```
Print binary:
```
_printf("%b", 98);
```
You also can print ASCII characters
```
_printf("%c", 71);
```

## Author
* Cristian Hurtado Diaz - 1185@holbertonschool.com
FullStack Software Engineer - holberton School.
