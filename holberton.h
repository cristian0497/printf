#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <unistd.h>

typedef struct options {
	char sel;
	int (*f)(char *c);
}type_data;


int _printf(const char *format, ...);
int _strlen(char *s);
int _strlen_esp(const char *s);
int funt_string(char *s);
int funt_char(char *c);

#endif
