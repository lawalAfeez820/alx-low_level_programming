#include "lists.h"

/**
 * pop_listint - delete the head of a linked list
 * @head: head of d list
 * Return: the element of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int j;

	if (*head == NULL)
		return (0);

	j = tmp->n;

	tmp = tmp->next;
	*head = tmp;
	return (j);
}
