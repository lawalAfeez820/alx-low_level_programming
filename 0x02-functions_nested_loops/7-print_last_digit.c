#include "main.h"

/**
 *print_last_digit - print out the last digit
 *
 *@i: number to print it last digit
 *Return: last digit
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
		_putchar((-1 * j) + '0');
		return (-1 * j);
	}
	_putchar(j + '0');
	return (j);
}
