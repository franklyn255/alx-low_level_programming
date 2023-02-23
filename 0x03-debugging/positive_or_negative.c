#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - is a function
 *
 * @i: is the parameter
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
