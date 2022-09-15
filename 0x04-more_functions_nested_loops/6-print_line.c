#include "main.h"

/**
 * print_line - program that print lines
 *
 * @n: number of line to print
 * Return: none
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}

