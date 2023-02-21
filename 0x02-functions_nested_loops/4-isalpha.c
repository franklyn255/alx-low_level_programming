#include "main.h"

/**
 * _isalpha - _isalpha is a  function that returns alphabets
 *
 * @c: value of the _isalpha variable
 *
 * Return: returns 1 if value is an alphabet otherwise returns 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
