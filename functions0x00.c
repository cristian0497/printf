#include "holberton.h"
/**
* write_char - prints a char
* @c: passed char
*
* Return: write the passed char
**/
int write_char(char *c)
{
	return (write(1, &c, 1));
}

/**
* write_string - prints an string
* @s: passed string
*
* Return: write the passed string
**/
int write_string(char *s)
{
	int length;

	length = _strlen(s);
	write(1, s, length + 1);
	return (length);
}
/**
* _strlen - gets the length of an string
* @s: passed string
*
* Return: length of an string
**/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 00; i++)
	{
	}
	return (i);
}
/**
* _strlen_esp - show what's the char that contains %
* @s: passed string
*
* Return: char that contains '%'
**/
int _strlen_esp(const char *s)
{
	int i, j;

	for (i = 0; s[i] != 00; i++)
	{
		if (s[i] != '%')
		{
			j++;
		}
		else
		{
			i++;
		}
	}
	return (j);
}
