#include "main.h"

/**
 *_memcpy - copy part of a string to another
 *
 * @dest: address copying to
 * @src: address copying from
 * @n: number of sample to copy from scr to dest
 *Return: pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
