#include "lists.h"
/**
 * free_dlistint: function that frees a dlistint_t list.
 * Prototype: void free_dlistint(dlistint_t *head);
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
