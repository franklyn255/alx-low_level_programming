#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints element in a listint_t list
 * @h: pointer to listint_t list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
