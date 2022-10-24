#include "lists.h"

/**
 * add_nodeint - add element to the begining of a  * node
 *
 * @head: the head of the node
 * @n: the element to add
 * Return: pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
