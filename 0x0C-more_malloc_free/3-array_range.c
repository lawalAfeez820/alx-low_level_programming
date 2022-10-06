#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - create array of int
 * @min: where to start from
 * @max: where to end
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		p[j] = i;
	return (p);
}
