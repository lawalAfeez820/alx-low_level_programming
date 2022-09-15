#include "main.h"

/**
 * print_diagonal - program that print lines
 *
 * @n: number of diagonal to print
 * Return: none
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1 || i == 0)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}

