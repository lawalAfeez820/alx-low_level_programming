#include "main.h"
#include <string.h>

/**
 * cap_string - capitalize strings
 *
 * @s: string to capitalize
 * Return: pointer to the string address
 */
char *cap_string(char *s)
{
	char d[] = {'\n', '\t', ' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = strlen(d);
	int i, j;

	for (i = 0; i < strlen(s); i++)
	{

		if (i == strlen(s) - 1)
			break;
		for (j = 0; j < len; j++)
		{
			if (s[i] == d[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}


