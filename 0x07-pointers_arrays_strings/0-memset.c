#include "main.h"

/**
 * _memset - replacing some part in a string with new character
 *
 * @s: thestrng to be to replaced
 * @b: the character to be used to replacement
 * @n: number of replacement
 * Return: the address to the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
