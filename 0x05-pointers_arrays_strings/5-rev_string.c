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

	n = _strlen(s) - 1;

	for (i = n; i >= 0; i--)
	{
		*(s + count) = s[i];
		count++;
	}
}
