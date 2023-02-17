#include <stdio.h>

/**
 * main - main is a function
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	i = 'z';
	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
