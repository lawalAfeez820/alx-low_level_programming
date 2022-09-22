#include "main.h"
#include <stdio.h>
int _pow(int a, int b);
int powof(int n);

/**
 *print_number - print numbers
 *
 * @n: number to be printed
 * Return: none
 */
void print_number(int n)
{
	int i;
	int k, j;

	if (n == 0)
		_putchar(0 + '0');

	else if  (n < 0 || n > 0)
	{
		if (n < 0)
		{
			n = -1 * n;
			_putchar('-');
		}
		k = powof(n);

		for (i = k; i >= 0; i--)
		{

			j = n / _pow(10, i);
			_putchar((j % 10) + '0');
		}
	}
}

/**
 * _pow - finding a raised to the power of b
 *
 * @a: the base
 * @b: the index
 *
 * Return: a raised to power b
 */
int _pow(int a, int b)
{
	int sum, i;

	if (b == 0)
		return (1);
	else if (b == 1)
		return (a);
	else if (b > 1)
	{
		sum = a;
		for (i = 1; i < b; i++)
		{
			sum = sum * a;
		}
		return (sum);
	}
}

/**
 * powof - find the range in which a number falls
 *
 * @n: number to find
 * Return: int
 */
int powof(int n)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		if (n >= _pow(10, i) && n < _pow(10, i + 1))
		{
			return (i);
		}
	}
	return (i);
}

