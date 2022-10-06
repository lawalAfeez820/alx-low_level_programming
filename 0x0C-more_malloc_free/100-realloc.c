#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocate memory using malloc
 *
 * @ptr: initial memory
 * @old_size: initial size if d pointer
 * @new_size: new size of d pointer
 * Return: pointer the new arrays
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *change;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size > old_size)
	{
		p = malloc(new_size);

		for (i = 0; i < old_size; i++)
		{
			change = ptr;
			p[i] = change[i];
		}
		free(ptr);
		return (p);
	}
	return (ptr);
}
