#include "main.h"
/**
 * reverse_array - reverses string
 * @a: array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
	}

}
