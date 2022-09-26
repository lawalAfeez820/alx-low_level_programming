#include "main.h"
#include <string.h>

/**
 * _strstr - function finds the first occurrence of the substring
 *  needle in the  string haystack.
 *  The terminating null bytes (\0) are not compared
 *
 * @haystack: string to search from
 * @needle:string to check match
 * Return: pointer to address of the fisrt match
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
				return (&haystack[j]);
		}
	}
	return (&haystack[strlen(haystack)]);
}
