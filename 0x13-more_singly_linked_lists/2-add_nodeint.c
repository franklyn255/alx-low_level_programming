#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning of
 * listint_t list
 * @head: address of the node
 * @n: value to be stored in new node
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
