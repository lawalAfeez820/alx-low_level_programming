#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - print any datatype
 * @format: datatype format
 *
 * Return: none
 */
void print_all(const char * const format, ...)
{
	d_type type[] = {
		{'c', print_c},
		{'i', print_int},
		{'f', print_f},
		{'s', print_s}
	};
	int i = 0;
	int j = 0;
	va_list args;
	char *sep = "";

	va_start(args, format);
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == type[j].c)
			{
				printf("%s", sep);
				type[j].f(args);
				sep  = ", ";
			}
			j = j + 1;
		}
		i = i + 1;
	}
	printf("\n");
}

/**
 * print_c - print character
 * @c: character to print
 *Return: none
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - print integer
 * @i: interger to print
 * Return: none
 */
void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}
/**
 * print_f - print float
 * @f:  float to print
 * Return: none
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_s - print string
 * @s: string to print
 * Return:none
 */
void print_s(va_list s)
{
	char *k = va_arg(s, char *);

	if (k == NULL)
		k = "(nil)";
	printf("%s", k);
}
