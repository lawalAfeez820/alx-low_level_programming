#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenate strings
 *
 * @ac: number of strings
 * @av: pointer to the strings
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, a;
	int j = 0;
	int b = 0;
	int count = 0;
	int c = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (; av[i][j]; j++)
		{
			count++;
		}
		j = 0;
	}
	p = malloc(sizeof(char) * (count + ac + 1));
	if (p == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (; av[a][b]; b++)
		{
			p[c] = av[a][b];
			c++;
		}
		p[c] = '\n';
		c++;
		b = 0;
	}
	p[c] = '\0';
	return (p);
}
