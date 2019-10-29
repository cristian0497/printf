#include "holberton.h"

/**
 * _strlen - funtion obtain strlen
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
	{}
	return (cont);
}

/**
* write_char - prints a char
* @c: passed char
* Return: write the passed char
**/
int write_char(char *c)
{
	return (write(1, &c, 1));
}

/**
* write_string - prints an string
* @s: passed string
* Return: write the passed string
**/
int write_string(char *s)
{

	int len;

	len = _strlen(s);
	write(1, s, len);
	return (len);
}
