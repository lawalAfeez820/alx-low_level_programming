#include "lists.h"

/**
 * get_nodeint_at_index - get the node at a certai *n index
 *
 * @head: poiter to the starting
 * @index: index to search
 * Return: poiter to d node searched
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
		if (i == index + 1)
			return (head);
	}
	return (NULL);
}
