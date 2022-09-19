#include "main.h"
int _strlen(char *s);

/**
 *puts2 - print the even index of string
 *
 * @str: string to print
 * Return: none
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
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
