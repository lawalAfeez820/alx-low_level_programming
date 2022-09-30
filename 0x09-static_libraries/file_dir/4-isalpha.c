#include "main.h"

/**
 * _isalpha - to check if character is alphabet
 *
 * @c: character to check
 * Return: 1 if true else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
