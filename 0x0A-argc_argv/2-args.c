#include <stdio.h>

/**
 * main - print all the  argument it accept
 * @argc: number of arguments
 * @argv: the vector containing the argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
