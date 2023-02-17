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
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
			continue;
		if (i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
