#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees listint_t list
 * @head: pointer to listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
