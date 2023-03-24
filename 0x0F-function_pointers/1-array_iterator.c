#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: array
 * @size: size of array
 * @action: function to print array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
