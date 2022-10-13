#include "variadic_functions.h"

/**
 * print_strings - to print numbers
 *
 * @separator: delimiter to separate the strings
 * @n: lenght of the arrays
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%s\n", va_arg(args, char *));
		else
		{
			printf("%s%s", va_arg(args, char *), separator);
		}
	}
	va_end(args);
}
