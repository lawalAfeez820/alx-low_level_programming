#include "main.h"

/**
 * main - print "_putchar"
 *
 * Return: 0
 */
int main(void)
{
	char var[] = "_putchar";
	int length = 8;
	int i;

	for (i = 0; i < length; i++)
		_putchar(var[i]);
	_putchar('\n');
	return (0);
}
