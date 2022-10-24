#include "lists.h"

/**
 * add_nodeint_end - adding element to the end of  * node
 *
 * @head: pointer to the start of the node
 * @n: element to add
 * Return: address of the new element
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (*head);
}
