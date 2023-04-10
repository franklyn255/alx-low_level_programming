#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int new = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int count = 0;

	while (new)
	{
		if ((new & n) == new)
		{
			_putchar('1');
			count = 1;
		}
		else if (count)
			_putchar('0');
		new >>= 1;

	}
	if (!count)
		_putchar('0');
}
