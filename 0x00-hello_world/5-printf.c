#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	int k;

	long int j;

	float f;

	long long int l;

	printf("Size of a char: %lu byte(s)\n", sizeof(i));

	printf("Size of an int: %lu byte(s)\n", sizeof(k));

	printf("Size of a long int: %lu byte(s)\n", sizeof(j));

	printf("Size of an long long int: %lu byte(s)\n", sizeof(l));

	printf("Size of an float: %lu byte(s)\n", sizeof(f));

	return (0);
}
