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
	listint_t *now;

	if (head == NULL)
		return (0);
	now = tmp;
	if (*head)
	{
		j = now->n;
		*head = now->next;
		free(tmp);
	}
	else
		j = 0;
	return (j);
}
