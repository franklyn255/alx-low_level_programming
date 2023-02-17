#include <stdio.h>

/**
 * main - main is a function
 *
 * Return: always 0
 */

int main(void)
{
	char i, I;

	i = 'a';
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	I = 'A';
	for (I = 'A'; I <= 'Z'; I++)
		putchar(I);
	putchar('\n');
	return (0);
}
