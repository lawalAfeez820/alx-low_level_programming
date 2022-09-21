#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse an array
 *
 * @a: array to be reversed
 * @n: lenth of the array
 *Return: void
 */
void reverse_array(int *a, int n)
{


	int new[n];
	int i;
	int j;
	int b = 0;
	int t = n - 1;


	for (i = 0; i < n; i++)
	{
		new[i] = a[i];
	}

	for (j = t; j <= 0; j--)
	{
		b = b + 1;
		a[b - 1] = new[j];
	}
}


