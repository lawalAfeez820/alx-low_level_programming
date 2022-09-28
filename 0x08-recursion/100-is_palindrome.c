#include "main.h"
#include "string.h"
int is_pal(char *s, int n, int count, int j, int i);

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
	int j = n - 1;

	return (is_pal(s, n, 0, j, 0));
}

/**
 * is_pal - check if a string is palindrome
 * @s: the string
 * @n: length of the string
 * @count: counter
 * @i: front index
 * @j: back index
 *Return: 1 if true else zero
 */
int is_pal(char *s, int n, int count, int j, int i)
{

	if (count == n / 2 && i == n / 2)
		return (1);
	if (i > n / 2)
		return (0);
	if (*(s + i) == *(s + j))
		return (is_pal(s, n, count + 1, j - 1, i + 1));
	return (is_pal(s, n, count, j - 1, i + 1));
}

