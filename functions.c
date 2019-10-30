#include "holberton.h"
/**
 * _strlen - funtion obtain strlen #1
 * @s: string
 * Return: contchar
 */
int _strlen(char *s) // 1
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
int _strlen_esp(const char *s) //2
{
	int cont;

	for (cont = 0; s[cont] != 00; cont++)
	{}
	return (cont);
}

char *convert(int num, int base)
{
    static char string[] = "0123456789ABCDEF";
    static char buffer[50];
    char *ptr;
    int sign = 0;

    ptr = &buffer[49];
    *ptr = '\0';
    if (num < 0)
      {
        num = (num * (-1));
        sign = 1;
      }
    do {
        *--ptr = string[num % base];
        num /= base;
    } while (num != 0);
    if (sign == 1)
    {
      *--ptr = '-';
    }
    return (ptr);
}
