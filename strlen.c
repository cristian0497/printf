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
 *
 *
 */
int _strlen_esp(const char *s)
{
	int cont, cont_ret;

	for (cont = 0; s[cont] != 00; cont++)
	{
		if (s[cont] != '%')
		{
			cont_ret++;
		}
		else
			cont++;
	}
	return (cont_ret);
}
