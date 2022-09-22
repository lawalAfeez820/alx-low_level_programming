#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings
 *
 *@dest: string to append to
 *@src: string that is going to be appended
 * Author: Lawal Afeez
 * Return: pointer/string
 */
char *_strcat(char *dest, char *src)
{
	int length_dest = strlen(dest);
	int length_src = strlen(src);
	int i;

	for (i = 0; i <= (length_dest + length_src - 1); i++)
	{

		if (i <= length_dest - 1)
			*(dest + i) = dest[i];
		else
			*(dest + i) = src[i - length_dest];
	}
	dest[i] = '\0';
	return (dest);
}
