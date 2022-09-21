#include "main.h"

/**
 * string_toupper
 *
 * @s: the string to manipulate
 * Return: a pointer to the string
 */
char *string_toupper(char *)
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
