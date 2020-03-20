#include "holberton.h"
/**
* write_char - prints a char
* @c: passed char
* Return: write the passed char
**/
char *write_char(int c)
{
	char ret[2];
	char *ptr;

	ret[0] = c, ret[1] = '\0';
	ptr = ret;
	return (ptr);
}
/**
* write_string - prints an string
* @s: passed string
* Return: write the passed string
**/
char *write_string(char *s)
{
	return (s);
}
/**
 * write_decimal - print a decimal
 * @d: int to print
 * Return: d value in string formar
 */
char *write_decimal(int d)
{
	char *st;

	st = _itoa(d, 10);
	return (st);
}
/**
 * _itoa - int value to string
 * @num: num to return in string format
 * @base: base to convert num;
 * Return: a string of num gived
 */
char *_itoa(int num, int base)
{

	static const char string[] = "0123456789ABCDEF";
	char buff[50];
	char *ptr;
	int sign = 0;
	long int n = (long int)num;

	ptr = &buff[49];
	*ptr = '\0';

	if (n < 0)
		n = (-1 * n), sign = 1;

	do {
		*--ptr = string[n % base];
		n /= base;
	} while (n != 0);

	if (sign == 1)
		*--ptr = '-';
	return (ptr);
}
