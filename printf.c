#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
/////////////////////////////////////////////////////
int funt_char(char *c)
{
	return (write(1, &c, 1));
}
/////////////////////////////////////////////////////
int funt_string(char *s)
{

	int len;

	len = _strlen(s);
	write(1, s, len + 1);
	return (len);
}
/////////////////////////////////////////////////////
int _strlen(char *s)
{
	int contchar = 0;

	while (s[contchar] != 00)
	{
		contchar++;
	}
	return (contchar);
}
////////////////////////////////////////////////////
int _printf(const char *format, ...)
{
	int cont;
	va_list mylist;
	char *c;

	va_start(mylist, format);
	for (cont = 0; format[cont] != '\0'; cont++) /* recorro format string */
	{

		if (format[cont] == '%' && format[cont - 1] != '\\')
		{
			if (format[cont + 1] == 'c')
			{
				c = va_arg(mylist, char *);
				funt_char(c);
			}
			if (format[cont + 1] == 's')
			{
				c = va_arg(mylist, char *);
				funt_string(c);

			}
		}
	}
	return (1);

}
