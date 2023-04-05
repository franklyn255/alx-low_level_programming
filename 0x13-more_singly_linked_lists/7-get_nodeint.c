#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns nth node of listint_t list
 * @head: pointer to listint_t list
 * @index: index of nodee
 * Return: nth node of listint_t list or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new = head;
	while (new != NULL)
	{
		if (count == index)
			break;
		count++;
		new = new->next;
	}
	return (new);
}
