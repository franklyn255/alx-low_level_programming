#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return(NULL);
	new = *head;
	while (new != NULL)
	{
		if (count == idx)
			new->n = n;
		count++;
		new = new->next;
	}
	return (new);
}
