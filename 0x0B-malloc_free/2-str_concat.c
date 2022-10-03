#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concat two string
 *@s1: 1st string
 *@s2: 2nd string
 *Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	p = malloc(strlen(s1) + strlen(s2) + 1);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	for (j = 0; s2[j]; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
