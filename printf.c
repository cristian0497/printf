#include "holberton.h"
/**
* _printf - prints anything like printf function
* @format: format: %c, %s or %i
* Return: nothing.
**/

int _printf(const char *format, ...)
{
	int cont, x, arg_len, w;
	int nume;
	char st;
	void (*f)(char *);
	va_list mylist;
	char *int_char;
	type_data opts[] = {
		{'c', write_char}, {'s', write_string},
		{'i', write_int}, {'d', write_dec},
		{'\n', NULL}
	};

	if (!format)
		return (-1);

	va_start(mylist, format);
	arg_len = _strlen_esp(format);

	for (cont = 0; cont < arg_len; cont++)
	{
		if (format[cont] == '%' && format[cont - 1] != '\\')
		{
			for (x = 0; opts[x].sel != 0; x++)
			{
				if (opts[x].sel == format[cont + 1])
				{
					f = opts[x].f;
					if (opts[x].sel == 'i' || opts[x].sel == 'd')
					{
						nume = va_arg(mylist, int);
						int_char = convert(nume, 10);
						f(int_char);
						cont += 2;
					}
					else
					{
						f(va_arg(mylist, char *));
						cont += 2;
						break;
					}
				}
			}
		}
		if (format[cont] != '%')
		{
			st = format[cont];
			write(1, &st, 1);
		}
		if (format[cont] == '\\' && format[cont + 1] == 'n')
		{
			w = 10;
			write(1, &w, 1);
		}
	}
	va_end(mylist);
	return (arg_len);
}
