#include "main.h"

/**
 * print_triangle - to print triangle
 *
 * @size: length
 * Return: triangle shape
 */
void print_triangle(int size)
{
	int m = 1;
	int i, j;
	int count, p;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			count = size - i;

			for (j = 0; j < i; j++)
			{
				if (m == 1)
				{
					for (p = 0 ; p < count; p++)
						_putchar(' ');
					m = m + 1;
				}
				_putchar('#');
			}
			m = 1;
			_putchar('\n');
		}
	}
}

