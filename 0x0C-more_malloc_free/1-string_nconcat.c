#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - function to concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bite to pick from s2
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	p = malloc(strlen(s1) + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';

	return (p);
}


