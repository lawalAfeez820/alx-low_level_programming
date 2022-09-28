#include "main.h"

/**
 * is_prime_number - check if a number is prime
 *
 * @n: number to check
 *
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	int count = 0;
	int i;

	if (n <= 1)
		return (0);
	for (i = 1; (i < n / 2 + 1); i++)
	{
		if (n % i == 0)
		{
			count++;
			if (count > 1)
				return (0);
		}
	}
	if (count == 1)
		return (1);
	return (0);
}
