#include "lists.h"

/**
 * print_listint - print element in linked list
 *
 * @h: head of the linked list
 * Return: the number of element in the linked lis *t
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
