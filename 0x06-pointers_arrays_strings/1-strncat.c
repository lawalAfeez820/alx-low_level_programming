#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 *
 *@dest: string to append to
 *@n: number of string to concat to dest variable
 *@src: string that is going to be appended
 * Author: Lawal Afeez
 * Return: pointer/string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_dest = strlen(dest);
	int length_src = strlen(src);
	int i;

	if (n > length_src)
	{
		n = length_src;
	}

	for (i = 0; i <= (length_dest + n - 1); i++)
	{

		if (i <= length_dest - 1)
			*(dest + i) = dest[i];
		else
			*(dest + i) = src[i - length_dest];
	}
	dest[i] = '\0';
	return (dest);
}
