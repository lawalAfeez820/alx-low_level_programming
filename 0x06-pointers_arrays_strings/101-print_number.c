#include "main.h"

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

	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}
	k = powof(n);

	for (i = k; i <= 0; i--)
	{
		j = n / pow(10, i);
		_putchar((j % 10) + '0');
	}
}

/**
 * pow - finding a raised to the power of b
 *
 * @a: the base
 * @b: the index
 *
 * Return: a raised to power b
 */
int pow(int a, int b)
{
	int sum, i;

	sum = a;
	for (i = 1; i < b; i++)
		sum = sum * a;
	return (sum);
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
		if n >= pow(10, i) && n < pow(10, i + 1)
		{
			return (i);
		}
	}
}

