#include "main.h"
#include <stdlib.h>
int _strlen(char *str);

/**
 * _strdup - create a copy of a string using malloc
 *
 * @str: string to be copied
 *
 * Return: pointer to the string
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	p = malloc(_strlen(str));
	if (str == NULL)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < _strlen(str); i++)
		*(p + i) = str[i];
	p[i] = '\0';
	return (p);
}

/**
 * _strlen - string length
 * @str: string to find it lenght
 * Return: lenght of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
