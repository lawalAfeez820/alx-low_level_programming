#include "lists.h"

/**
 * free_listint2 - free list
 * @head: start of the linked list
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
