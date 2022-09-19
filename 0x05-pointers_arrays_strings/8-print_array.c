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

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i < n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
	else
		printf("\n");
}
