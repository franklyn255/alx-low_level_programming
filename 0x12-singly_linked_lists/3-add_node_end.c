#include "lists.h"
#include <stdlib.h>
#include "string.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a double pointer to the list_t list
 * @str: new nod string
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = new;
	}
	return (new);
}
