#include "main.h"
/**
 * _memcpy - copies src elements to dest
 * @dest: destination array
 * @src: source array
 * @n: number of src element
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
