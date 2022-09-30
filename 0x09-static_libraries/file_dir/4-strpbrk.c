#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 *  in the string accept
 *
 * @s:string to be scanned
 * @accept:string containing the characters to match
 *
 * Return:  pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = NULL;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (p);
}


