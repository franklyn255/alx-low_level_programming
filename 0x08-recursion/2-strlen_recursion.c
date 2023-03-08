#include "main.h"
/**
 *  _strlen_recursion - returns length of string
 *  @s: input
 *  Return: i
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
