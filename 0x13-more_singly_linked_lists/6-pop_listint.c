#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - returns listint_t data
 * @head: pointer to listint_t list
 * Return: node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int dig;

	if (*head == NULL)
		return (0);
	dig = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (dig);
}
