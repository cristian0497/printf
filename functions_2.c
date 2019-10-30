#include "holberton.h"

void write_int(char *n)
{
	write(1, n, 4);
}

void write_dec(char *n)
{
	write(1, n, 4);
}
/**
* write_char - prints a char
* @c: passed char
* Return: write the passed char
**/
void write_char(char *c)
{
	write(1, &c, 1);
}

/**
* write_string - prints an string
* @s: passed string
* Return: write the passed string
**/
void write_string(char *s)
{
	int len;

	len = _strlen(s);
	write(1, s, len);
}
