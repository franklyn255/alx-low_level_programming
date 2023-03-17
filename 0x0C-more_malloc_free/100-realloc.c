#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: old pointer
 * @old_size: size of old pointer
 * @new_size: size of new pointer
 * Return: new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	/* if new size is zero, free ptr and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* if ptr is NULL, allocate a new block of size new_size */
	if (ptr == NULL)
		return (malloc(new_size));
	/* if new_size is the same as old_size return ptr */
	if (new_size == old_size)
		return (ptr);
	/* allocate a new block of size new_size */
	new_ptr = malloc(new_size);
	/* copy contents of the old block to the new block */
	if (new_ptr != NULL)
	{
		for (i = 0; i < old_size && i < new_size; i++)
			((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	/* free the old block */
	free(ptr);

	return (new_ptr);
}
