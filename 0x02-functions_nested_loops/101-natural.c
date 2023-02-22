#include <stdio.h>

/**
 * main - main is a function
 *
 * Return: return is always 0
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
