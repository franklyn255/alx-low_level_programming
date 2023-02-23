#include "main.h"

/**
 * _isupper - function for printing only capital letters
 *
 * @c: parameter for capital letters
 *
 * Return: always 0
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
