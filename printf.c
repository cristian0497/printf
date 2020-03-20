#include "holberton.h"
/**
* _printf - prints anything like printf function
* @format: format: %c, %s or %i
* Return: nothing.
**/
int _printf(const char *format, ...)
{
	int arg_len, cformat, cbuf, copts;
	va_list mylist;
	char *buf;
	type_data opts[] = { {'c', write_char}, {'s', write_string},
			     {'d', write_decimal}, {'i', write_decimal},
			     {'\0', NULL} };

	if (!format)
		return (-1);
	va_start(mylist, format), arg_len = _strlen_esp(format);
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
		return (_free(buf));
	for (cformat = 0, cbuf = 0, copts = 0; cformat < arg_len; cformat++)
	{
		if (format[cformat] == '%')
		{
			copts = 0;
			while (opts[copts].sel)
			{
				if (format[cformat + 1] == '%')
				{
					buf[cbuf] = format[cformat], cbuf++, cformat++;
					break;
				}
				if (format[cformat + 1] == opts[copts].sel)
				{
					cformat++;
					cbuf += optcheck(format[cformat], buf, mylist, opts, copts, cbuf);
					break;
				}
				copts++;
			}
		}
		else
			buf[cbuf] = format[cformat], cbuf++;
	}
	write(1, buf, cbuf);
	va_end(mylist), free(buf);
	return (cbuf);
}
