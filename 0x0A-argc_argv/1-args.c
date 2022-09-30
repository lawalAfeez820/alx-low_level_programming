#include <stdio.h>

/**
 * main - print the number of argument it accept
 * @argc: number of arguments
 * @argv: the vector containing the argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
