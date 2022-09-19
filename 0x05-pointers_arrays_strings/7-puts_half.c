#include "main.h"
int _strlen(char *s);

/**
 *puts_half - print the last half of string
 *
 * @str: string to print
 * Return: none
 */
void puts_half(char *str)
{
	int i;
	int len = _strlen(str) / 2;

	for (i = len; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


/**
 * _strlen - lenght of string
 *
 * @s: pointer variable
 *
 * Author: Lawal Afeez
 * Return: An integer
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i]; i++)
		count = count + 1;
	return (count);
}
