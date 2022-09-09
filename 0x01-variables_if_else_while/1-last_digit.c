#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program to print if a random number generated  is
 * negative or positive
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	int j;

	char str[12];

	char try[2];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(str, "%d", n);

	for (int i = 0 ; i < 12 ; i++)
	{
		if (str[i] == '\0')
			break;
		j = j + 1;
	}

	j = j - 1;
	
	try[0] = str[j];
	try[1] = 'b';

	int a = atoi(try);

	if (a > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, a);

	else if (a == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);

	else if (a < 6 && a != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, a);

	return (0);
}
