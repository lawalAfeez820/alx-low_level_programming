#include "lists.h"

/**
 * list_len - return the number lf element in link *ed list
 * @h: head of a linked list
 * Return: the number of node in linked list h
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
