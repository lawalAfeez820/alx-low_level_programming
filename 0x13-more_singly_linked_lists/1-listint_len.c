#include "lists.h"

/**
 *listint_len - print element in linked list
 *
 * @h: head of the linked list
 * Return: the number of element in the linked lis *t
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
