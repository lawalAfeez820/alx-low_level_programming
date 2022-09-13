#include "main.h"

/**
 *print_times_table - print multiplication table
 *
 * @n: the number to control the multiplication table
 * Return: the multiplication table
 */
void print_times_table(int n)
{
	int i, j, mul;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (mul == (mul % 10))
				{
					if (j == 0)
						_putchar(mul + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}

				else if (mul == (mul % 100))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if (mul == (mul % 1000))
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
