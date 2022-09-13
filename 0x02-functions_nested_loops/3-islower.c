#include "main.h"

/**
 * _islower - check if an alphabet is lowercase
 * @c: character to be checked
 *
 *Return: 1 if success else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
