#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints binary representation of a number
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int new;
	int j, count = 0;
	int num_bits = sizeof(n) * 8;

	for (j = num_bits - 1; j >= 0; j--)
	{
		new = n >> 1;
		if (new & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');

	}
	if (!count)
		_putchar('0');
}
