#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns sum of listint_t list datas
 * @head: pointer to the listint_t list
 * Return: sum of listint_t data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
