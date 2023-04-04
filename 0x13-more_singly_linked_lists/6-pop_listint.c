#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

int pop_listint(listint_t **head)
{
	listint_t *temp, *del;

	if (*head == NULL)
		return (0);
	del = *head;
	*head = (*head)->next;
	free(del);
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		printf("%d\n", temp->n);
	}
	return (temp->n);
}
