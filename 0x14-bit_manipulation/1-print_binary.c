#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int new;
	int j, count = 0;

	for (j = 63; j >= 0; j--)
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
