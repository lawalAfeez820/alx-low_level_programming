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
	int i, count;

	for (i = 0; *(s + 1); i++)
	{
		count++;
	}
	return (count);
}
