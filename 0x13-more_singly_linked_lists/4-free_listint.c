#include "lists.h"
#include <stdlib.h>

void free_listint(listint_t *head)
{
	free(head);
	free(head->n);
	free(head->next);
}
