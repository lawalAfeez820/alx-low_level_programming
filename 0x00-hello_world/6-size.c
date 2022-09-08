#include <stdio.h>

/**
 * main - program to show memory size
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;

	printf("Size of a char: %lu byte(s)\n", sizeof(i));
	printf("Size of an int: %lu byte(s)\n", sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", sizeof(k));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a float: %lu byte(s)\n", sizeof(m));
	return (0);
}
