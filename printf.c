#include "holberton.h"
/**
* _printf - prints anything like printf function
* @format: format: %c, %s or %i
*
* Return: nothing.
**/
int _printf(const char *format, ...)
{
	int i, j;
	char st;
	int (*f)(char *);
	va_list mylist;
	type_data opts[] = {
		{'c', write_char},
		{'s', write_string},
		{0, 0}
	};

	va_start(mylist, format);
	for (i = 0; format[i] != 00; i++)
	{
		if (format[i] == '%' && format[i - 1] != '\\')
		{
			for (j = 0; opts[j].sel != 0; j++)
			{
				if (opts[j].sel == format[i + 1])
				{
					f = opts[j].f;
					f(va_arg(mylist, char *));
				}
			}
		}
		if (format[i] != '%')
		{
			st = format[i];
			write(1, &st, 1);
		}
	}
	return (0);
}
