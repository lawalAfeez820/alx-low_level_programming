#include "main.h"
int _strlen(char *s);

/**
 * rev_string - reverse string
 *
 * @s: string to be reversed
 *
 * Return: none
 */
void rev_string(char *s)
{
	int i, n;
	int count = 0;
	char j[_strlen(s)];

	for (j = 0; j < _strlen(s); j++)
	{
		j[i] = s[i];
	}

	n = _strlen(s) - 1;

	for (i = n; i >= 0; i--)
	{
		*(s + count) = j[i];
		count = count + 1;
	}
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
