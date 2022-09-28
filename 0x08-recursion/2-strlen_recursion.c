#include "main.h"
int count(char *s, int len);

/**
 * _strlen_recursion - print string in reverse follow by new line
 *
 * @s: string to print out
 * Return: lenght of string
 *
 */
int _strlen_recursion(char *s)
{
	return (count(s, 0));
}

/**
 * count - return the lenght of a string
 *
 * @s: string
 * @len: counter
 * Return:
 * the lenght of string
 */
int count(char *s, int len)
{
	if (*s == '\0')
		return ((len));
	return (count(s + 1, len + 1));
}
