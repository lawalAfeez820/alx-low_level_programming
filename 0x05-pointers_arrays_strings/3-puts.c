#include "main.h"

/**
 *_puts - pring string with new line
 *@str: pointer to the string
 *
 * Author: Lawal Afeez
 * Return: none
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
