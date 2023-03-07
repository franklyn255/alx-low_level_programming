#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string
 * @c: character
 * Return: always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; s++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
