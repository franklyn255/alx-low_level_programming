#include "main.h"

/**
 * _abs - function that checks the absolute value
 *
 * @a: parameter to be checked
 *
 * Return: returns absolute value
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
