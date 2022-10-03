#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - grid allocation
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2-D array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int) * height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (z = i; z >= 0; z--)
			{
				free(p[z]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
