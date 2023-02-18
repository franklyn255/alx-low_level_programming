#include <stdio.h>

/**
 * main - main is a function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char j;

	i = 0;
	j = 'a';
	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (j = 'a'; j < 'g'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
