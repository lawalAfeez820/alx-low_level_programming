#include "main.h"
#include <string.h>

/**
 * _strncpy - copy n-number of character in a string
 *
 * @dest: to space to copy to
 * @src: copying from
 * @n: number of element to copy
 * Return: pointer to the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = strlen(src);
	int i;

	if (n <= len)
	{
		for (i = 0; src[i]; i++)
		{
			dest[i] = src[i];
		}
		return (dest);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i < len)
			{
				dest[i] = src[i];
			}
			else
			{
				dest[i] = '\0';
			}
		}
		return (dest);
	}
}
