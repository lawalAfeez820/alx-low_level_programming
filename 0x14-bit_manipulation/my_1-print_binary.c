#include "main.h"
int _find(unsigned long int n, int i);
unsigned long int _mul(int i);

/**
 * print_binary - print binary of a number
 * @n: number to print it binary
 * Return: none/
 */
void print_binary(unsigned long int n)
{
	int x, j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	x = _find(n, 0);
	j = n - _mul(x);
	print_binary(x);
	_putchar(j + '0');

}

/**
 * _find - find where the multiplication of a numb * er falls
 * @n: the number
 * @i: where it falls
 * Return: i
 */

int _find(unsigned long int n, int i)
{
	if (n == 0)
		return (0);

	if (_mul(i) <= n && _mul(i + 1) > n)
		return (i);
	return (_find(n, i + 1));
}


/**
 * _mul - multiplication table of 2
 *@i: value
 * Return: int
 */
unsigned long int _mul(int i)
{
	if (i == 0)
		return (0);
	return (2 + _mul(i - 1));
}
