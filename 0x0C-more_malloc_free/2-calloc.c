#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - function that alocate memory using malloc
 * @nmemb: number of byte
 * @size: size of each returned pointer
 * Return: a pointer to the allocted memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}
