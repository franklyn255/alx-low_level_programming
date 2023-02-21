#include "main.h"

/**
 * print_alphabet_x10 - is a function used to print 10 times the alphabet
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
		i++;
	}
}
