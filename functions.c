#include "holberton.h"
/**
 * _strlen - funtion obtain strlen #1
 * @s: string
 * Return: contchar
 */
int _strlen(char *s)
{
	int contchar = 0;

	while (s[contchar] != 00)
	{
		contchar++;
	}
	return (contchar);
}
/**
* _strlen_esp - show what's the char that contains %
* @s: passed string
*
* Return: char that contains '%'
**/
int _strlen_esp(const char *s)
{
	int cont;

	for (cont = 0; s[cont] != 00; cont++)
		;
	return (cont);
}
/**
 * _free - free spaces allocated by malloc
 * @buf: pointer to free allocate
 * Return: Error Code
 */
int _free(char *buf)
{
	free(buf);
	return (-1);
}
/**
 * optcheck - check the option of the % command
 * @opt: the option selectec, "ie c, s, i, d"...
 * @buf: buffer to add format opt
 * @mylist: arguments to use to print
 * @opts: struc with options and their function pointer
 * @copts: idx of options
 * @cbuf: idx of buffer
 * Return: count of chars added to buffer
 */
int optcheck(char opt, char *buf, va_list mylist,
	     type_data *opts, int copts, int cbuf)
{
	char *st, *st_null = "(null)";
	int x = 0;

	if (opt == 'c')
	{
		st = opts[copts].f(va_arg(mylist, int));
		while (st[x] != '\0')
			buf[cbuf] = st[x], x++, cbuf++;
		return (x);
	}
	if (opt == 's')
	{
		st = opts[copts].f(va_arg(mylist, char *));
		if (!st)
		{
			while (st_null[x])
				buf[cbuf] = st_null[x], x++, cbuf++;
			return (x);
		}
		while (st[x])
			buf[cbuf] = st[x], x++, cbuf++;
		return (x);

	}
	if (opt == 'd' || opt == 'i')
	{
		st = opts[copts].f(va_arg(mylist, int));
		while (st[x])
			buf[cbuf] = st[x], x++, cbuf++;
		return (x);
	}
	else
		return (0);
}
/**
 * clean_buf - clean the buf to overwrite
 * @buf: buf to clean
 */
void clean_buf(char *buf)
{
	char *tmp = buf;
	int x = 0;

	while (tmp[x])
		tmp[x] = '\0';
}
