#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers
 *
 * @n: function parameters
 *
 * Return: always 0
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		printf("\n");
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}

	}
	else if (n < 0)
	{
		printf("\n");
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		printf("\n");
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
		printf("%d, ", n);
}
