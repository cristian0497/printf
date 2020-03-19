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
