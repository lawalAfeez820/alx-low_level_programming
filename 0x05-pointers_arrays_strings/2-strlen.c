#include "main.h"

/**
 * _strlen - lenght of string
 *
 * @s: pointer variable
 *
 * Author: Lawal Afeez
 * Return: An integer
 */
int _strlen(char *s);
{
	int i;
	int count = 0;

	for (i = 0; s[i]; i++)
		count = count + 1;
	return (count);
}
