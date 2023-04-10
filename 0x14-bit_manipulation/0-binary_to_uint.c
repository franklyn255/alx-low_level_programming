#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string
 * Return: converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int ans = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		ans <<= 1;
		ans += b[i] - '0';
		i++;
	}
	while (b[i] > '1')
	{
		return (0);
		i++;
	}
	return (ans);
}

