#include "main.h"

/**
 * _strlen - check for length of string
 * @s: string
 * Return: returns length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
