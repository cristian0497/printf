#include "holberton.h"
/**
* _printf - prints anything like printf function
* @format: format: %c, %s or %i
*
* Return: nothing.
**/
int _printf(const char *format, ...)
{
	int i;
	char *c;
	va_list mylist;

	va_start(mylist, format);

	for (i = 0; format[i] != 00; i++)
	{
		if (format[i] == '%' && format[i - 1] != '\\')
		{
			if (format[i + 1] == 'c')
			{
				c = va_arg(mylist, char *);
				write_char(c);
			}
			if (format[i + 1] == 's')
			{
				c = va_arg(mylist, char *);
				write_string(c);
			}
		}
	}
	return (0);
}
