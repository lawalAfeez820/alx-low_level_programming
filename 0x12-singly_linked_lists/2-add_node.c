#include "lists.h"
#include <string.h>

/**
 * add_node - adding element to the start of linke *d list
 *
 * @head: a pointer to the pointer of the linked list starting point
 * @str: string to be added
 * Return: the pointer to the added node.
 */
list_t *add_node(list_t **head, const char *str)
{

	char *s;

	list_t *new = malloc(sizeof(list_t));

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

	new->next = *head;

	*head = new;

	return (new);
}

