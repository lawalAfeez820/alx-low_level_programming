#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b:  number of byte to generate
 *
 * Return: void pointerr
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

