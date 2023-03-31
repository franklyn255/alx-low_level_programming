#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list to print
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
		{
			h = h->next;
			s++;
		}
	}
	return (s);
}
