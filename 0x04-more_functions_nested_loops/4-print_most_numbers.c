#include "main.h"

/**
 * print_most_numbers - function that prints 0-9 excluding 2 and 4
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j != 2 && j != 4)
		_putchar(j + '0');
	}
	_putchar('\n');
}
