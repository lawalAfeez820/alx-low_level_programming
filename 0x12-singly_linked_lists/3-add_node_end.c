#include "lists.h"
#include <string.h>

/**
 * add_node_end - adding element to the end of linked  * list
 *
 * @head: a pointer to the pointer of the linked list starting point
 * @str: string to be added
 * Return: the pointer to the added node.
 */
list_t *add_node_end(list_t **head, const char *str)
{

	char *s;


	list_t *new = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (head == NULL || str == NULL)
		return (NULL);

	s = strdup(str);

	if (s == NULL)
		return (NULL);

	if (new == NULL)
	{
		free(s);
		return (NULL);
	}

	new->str = s;

	new->len = strlen(str);

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

