#include "main.h"
int sq(int i, int j);

/**
 * _sqrt_recursion - square root of number
 *
 * @n: number to find its square root
 * Return: n does not have a natural square root, the function should
 *  return -1
 */
int _sqrt_recursion(int n)
{
	return (sq(0, n));
}

/**
 * sq - find the sqrt
 * @i: base
 * @j: index
 * Return: int
 */
int sq(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i * i > j)
		return (-1);
	return (sq(i + 1, j));
}
