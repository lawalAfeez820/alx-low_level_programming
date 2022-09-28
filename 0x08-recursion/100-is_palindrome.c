#include "main.h"
#include "string.h"

/**
 * is_palindrome - check if a string is palindrome
 *
 * @s: string to check
 *
 * Return: 1 if true else 0
 */
int is_palindrome(char *s)
{
	int n = strlen(s);
	int count = 0;
	int j, i;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		if (*(s + i) == *(s + j))
			count++;
	}
	if (count == n / 2)
		return (1);
	return (0);
}

