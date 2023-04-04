#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node at the end of list
 * @head: pointer to listint_t list
 * @n: value of node
 * Return: added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *lastNode;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	lastNode = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = new;
	}
	return (lastNode);
}
