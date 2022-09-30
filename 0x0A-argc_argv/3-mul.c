#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply two numbers from the command line
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: the product of the two numbers
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
