#include "main.h"

/**
 * _strcpy - copy string from one array to another
 *@dest: where to copy to
 * @src: where we are copying from
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
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
