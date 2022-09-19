#include <stdio.h>
#include "main.h"

/**
 * print_array - print n number of element in an array
 *
 * @a: array
 * @n: number of element to print
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

		if (i < n - 1)
		{
			printf("%i, ", a[i]);
		}
		else
		{
			printf("%i\n", a[i]);
		}
	}
}
