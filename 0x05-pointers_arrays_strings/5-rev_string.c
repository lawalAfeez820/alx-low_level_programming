#include "main.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

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
	int *keep;

	keep = _strcpy(keep, s);

	n = _strlen(s) - 1;

	for (i = n; i >= 0; i--)
	{
		*(s + count) = keep[i];
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
