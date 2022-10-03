#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create array
 *
 * @size: size of the array
 * @c: character to fill the array with
 *Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;
	return (p);
}


