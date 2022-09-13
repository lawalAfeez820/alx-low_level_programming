#include "main.h"

/**
 *times_table - multiplication table
 *
 * Return: none
 */
void times_table(void)
{
	int i;
	int mul;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (mul >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else
			{
				if (j == 0)
					_putchar(mul + '0');
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
			}
		}
		_putchar('\n');
	}
}
