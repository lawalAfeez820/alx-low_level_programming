#include "main.h"

/**
 * _isupper - uppercase checker
 *@c: letter to check it case
 * Return: 1 otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
