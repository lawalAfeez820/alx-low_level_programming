#include "main.h"

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

	for (i = _strlen(s) - n, n = 1; i >= 0; i--)
	{
		*(s + count) = s[i];
		count++;
	}
}
