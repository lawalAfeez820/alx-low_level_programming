#include "main.h"
int is_prime(int n, int i, int count);

/**
 * is_prime_number - check if a number is prime
 *
 * @n: number to check
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	return (is_prime(n, 1, 0));
}

/**
 * is_prime - check if a number is prime
 *
 * @n: the number to be checked
 * @i: it factors
 * @count : counter
 * Return: 1 if prime else 0
 */
int is_prime(int n, int i, int count)
{
	if (n < 2)
		return (0);

	if (i >= n / 2 + 1 && count == 1)
		return (1);
	if (i < n / 2 + 1 && count > 1)
		return (0);
	if (n % i == 0)
		return (is_prime(n, i + 1, count + 1));
	return (is_prime(n, i + 1, count));
}


