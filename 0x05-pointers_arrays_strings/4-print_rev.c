#include "main.h"
int _strlen(char *s);

/**
 * print_rev - reverse a string
 *
 * @s: sting to be reverved
 *
 * Return: none
 */
void print_rev(char *s)
{
	int i, n;

	n = _strlen(s) - 1;

	for (i = n; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

/**
 * _strlen - strlength
 * @s: string to find it length
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; *(s + 1); i++)
		count++;
	return (count);
}
