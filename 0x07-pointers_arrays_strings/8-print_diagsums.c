#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - printing sum of diagonal
 * @size: size of the square
 * @a: two dimentional array
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	long sum_r = 0;
	long int sum_l = 0;
	int count_l = 0;
	int count_r = 0;

	for (i = 0; i < (size * size); i = i + (size + 1))
	{
		count_r++;
		sum_r = sum_r + a[i];
		if (count_r == size)
			break;
	}
	printf("%ld, ", sum_r);

	for (j = size - 1; j < (size * size); j = j + (size - 1))
	{
		count_l++;
		sum_l = sum_l + a[j];
		if (count_l == size)
			break;
	}
	printf("%ld\n", sum_l);
}
