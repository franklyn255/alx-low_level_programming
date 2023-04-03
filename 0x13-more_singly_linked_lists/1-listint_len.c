#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in listint_t list
 * @h: pointer to listint_t list
 * Return: numer of elements in listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
		count++;
	return (count);
}
