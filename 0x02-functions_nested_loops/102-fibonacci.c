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

	printf("%li", a);
	printf(", ");
	printf("%li", b);
	printf(", ");

	for (i = 0; i < 48; i++)
	{
		c = a;
		a = b;
		b = b + c;
		printf("%li", b);
		if (i == 47)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}

