#include "main.h"

/**
 * factorial - factorial of a number
 *
 * @n:number to find it factorial
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (factorial(n - 1) * n);
}
