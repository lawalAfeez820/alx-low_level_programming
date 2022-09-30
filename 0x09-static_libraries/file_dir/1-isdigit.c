#include "main.h"

/**
 * _isdigit - check if a number is digit betweeen o to 9
 * @c: digit to check
 * Return: 1 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
