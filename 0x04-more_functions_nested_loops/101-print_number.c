#include "main.h"

void print(unsigned int n);

/**
 * print_number - print numbers
 * @var: variable to be printed
 *
 *Return: none
 */
void print_number(int var)
{
	if (var < 0)
	{
		_putchar('-');
		var = -var;
	}
	print(var);
}

/**
 * print - subfunction for recursive printing
 * @n: variable to be printed
 * Return: none
 */
void print(unsigned int n)
{
	if (n / 10)
		print(n / 10);
	_putchar('0' + n % 10);
}
