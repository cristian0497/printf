#include "holberton.h"
/**
* write_char - prints a char
**/
int write_char(char *c)
{
	return (write(1, &c, 1));
}

/**
* write_string - prints an string
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
**/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 00; i++)
	{
	}
	return (i);
}
