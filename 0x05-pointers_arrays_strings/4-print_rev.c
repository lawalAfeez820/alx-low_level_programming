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
 * _strlen - lenght of string
 *
 * @s: pointer variable
 *
 * Author: Lawal Afeez
 * Return: An integer
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i]; i++)
		count = count + 1;
	return (count);
}
