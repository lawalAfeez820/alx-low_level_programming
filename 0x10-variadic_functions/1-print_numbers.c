#include "variadic_functions.h"

/**
 * print_numbers - to print numbers
 *
 * @separator: delimiter to separate the numbers
 * @n: lenght of the arrays
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(args, int));
		else
		{
			printf("%d%s", va_arg(args, int), separator);
		}
	}
	va_end(args);
}
