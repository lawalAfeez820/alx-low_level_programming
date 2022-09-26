#include "main.h"
#include <stddef.h>

/**
 * _strchr - function finds the occurrence of the c
 * in the  string s.
 *  The terminating null bytes (\0) are not compared
 *
 * @s: string to search from
 * @c:character to check match
 * Return: pointer to address of the match
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return s[i];
}
