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
	int count = 0;

	for (i = _strlen(s) - n, n = 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
