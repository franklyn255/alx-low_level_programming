#include "main.h"
/**
 * print_rev - prints string is revers
 * @s: string
 */

void print_rev(char *s)
{
	int length = 0;
	int o;

	while (*s != 0)
	{
		length++;
		s++;
	}
	s--;
	for (o = length; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
