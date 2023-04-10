#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: the number to get the bit from
 * @index: the index of the bit to get
 * Return: value of the bit at index, or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
