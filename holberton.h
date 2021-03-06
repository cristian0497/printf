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
	char *(*f)();
} type_data;
void clean_buf(char *buf);
int _printf(const char *format, ...);
int _strlen_esp(const char *s);
int _free(char *buf);
int optcheck(char opt, char *buf, va_list mylist, type_data *opts, int copts, int cbuf);
char *write_char(int c);
char *write_string(char *n);
char *write_decimal(int d);
char *write_binary(int d);
char *_itoa(int i, int base);
#endif
