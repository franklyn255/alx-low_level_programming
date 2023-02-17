#include <stdio.h>

/**
 * main - main is a function
 *
 * Return: always 0
 */

int main(void)

{
	char i;

	i = 'a';

	while (i <= 'z')
		putchar(i);
	i++;
	putchar('\n');
	return (0);
}
