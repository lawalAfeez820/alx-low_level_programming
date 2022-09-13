#include <stdio.h>

/**
 * main - first 50 fibonacci
 *
 *
 *Return: 0
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int i;
	long int sum;

	sum = 0;

	sum = sum + b;

	for (i = 1; i < 49; i++)
	{
		c = a;
		a = b;
		b = b + c;
		if (i % 2 == 0)
			sum = sum + b;
		if (b > 4000000)
			break;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}

