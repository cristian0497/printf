#include "holberton.h"

int funt_char(char *c)
{
	return (write(1, &c, 1));
}

int funt_string(char *s)
{

	int len;

	len = _strlen(s);
	write(1, s, len + 1);
	return (len);
}

int _printf(const char *format, ...)
{
	int cont, x;
	int (*f)(char *);
	va_list mylist;
	type_data opts[] = {
		{'c', funt_char},
		{'s', funt_string},
		{0, 0}
	};

	va_start(mylist, format);
	for (cont = 0; format[cont] != '\0'; cont++)
	{
		if (format[cont] == '%' && format[cont - 1] != '\\')
		{
			for (x = 0; opts[x].sel != 0; x++)
			{
				if (opts[x].sel == format[cont + 1])
				{
					f = opts[x].f;
					f(va_arg(mylist, char *));
				}
			}
);
}
