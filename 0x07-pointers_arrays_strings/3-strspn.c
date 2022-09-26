#include "main.h"
#include <stddef.h>

/**
 * _strspn - returns the length of the initial substring of the string
 *  pointed to by str1 that is made up of only those character
 *  contained in the string pointed to by str2.
 *
 * @s:string to be scanned
 * @accept:string containing the characters to match
 *
 * Return: This function
 * returns the number of characters
 * in the initial segment of str1
 * which consist only of characters
 * from str2.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (accept[i] == s[j])
			{
				count++;
				break;
			}
		}
		break;
	}
	if (count == 0)
		return;
	return (&s[j]);

