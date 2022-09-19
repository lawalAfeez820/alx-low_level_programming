#include "main.h"

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
