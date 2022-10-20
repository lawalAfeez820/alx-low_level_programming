#include "lists.h"

/**
 * print_list - print the element in a linked list
 * @h: head of a linked list
 * Return: the number of node in linked list h
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
