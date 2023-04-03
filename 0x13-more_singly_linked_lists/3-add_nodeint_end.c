#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *lastNode;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		lastNode = *head;
		for (; lastNode->next != NULL; 
			lastNode = lastNode->next);
		lastNode->next = new;
	}
	return (lastNode);
}
