#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main -add positive numbers from
 * the command line
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: the product of the two numbers
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	unsigned long int j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);

	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
