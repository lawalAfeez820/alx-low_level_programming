#include <stdio.h>

/**
 * main - print it name
 *
 * @argc: the number of argument
 * @argv: the array of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
