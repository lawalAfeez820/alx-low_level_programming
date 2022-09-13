#include <stdio.h>

/**
 * main -print 1-98 term of fibonnaci
 *
 * Return: 0
 */

int main(void)
{
	unsigned long i, j, k, x, y, z, keep;
	int counter;

	counter = 0;
	i = 0;
	j = 1;
	for (counter = 1; counter <= 91; counter++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	x = i % 1000;
	i = i / 1000;
	y = j % 1000;
	j = j / 1000;
	while (counter <= 98)
	{
		keep = (x + y) / 1000;
		z = (x + y) - keep * 1000;
		k = (i + j) + keep;
		x = y;
		y = z;
		i = j;
		j = k;
		if (z >= 100)
			printf("%lu%lu", k, z);
		else
			printf("%lu0%lu", k, z);
		if (counter != 98)
			printf(", ");
		counter++;
	}
	putchar('\n');
	return (0);
}

