#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct options - struct main
 * @sel: char of selection
 * @f: function to call
 */
typedef struct options
{
	char sel;
	void (*f)();
} type_data;

int _printf(const char *format, ...);
int _strlen(char *s);
int _strlen_esp(const char *s);
char *convert(int num, int base);
void write_string(char *s);
void write_char(char *c);
void write_int(char *s);
void write_dec(char *s);

#endif
