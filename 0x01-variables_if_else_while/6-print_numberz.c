#include <stdio.h>

/**
 * main - main is a function
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
