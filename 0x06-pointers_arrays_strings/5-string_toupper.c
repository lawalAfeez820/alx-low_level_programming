#include "main.h"

/**
 * string_toupper - convert to upper case
 *
 * @s: the string to manipulate
 * Return: a pointer to the string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
