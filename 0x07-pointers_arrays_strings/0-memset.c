#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a pointer to the memory block to be filled.
 * @b: the byte value to be written to the memory block.
 * @n: the number of bytes to be written to the memory block.
 * Return: returns pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
