#include "lists.h"
/**
 * sum_dlistint:  a function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * Prototype: int sum_dlistint(dlistint_t *head);
 * Return: The sum of all the data. 
 * if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
