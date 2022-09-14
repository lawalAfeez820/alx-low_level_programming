#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && a > c) && (b >= c || c >= b))
	{
		largest = a;
	}
	else if ((b > a && b > c) && (a >= c || c >= a))
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}

	return (largest);
}
