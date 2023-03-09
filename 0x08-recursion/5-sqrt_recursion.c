#include "main.h"
int square_root_helper(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (square_root_helper(n, 1));
}

/**
 * square_root_helper - Helper function for _sqrt_recursion
 * @n: The number to calculate the square root of
 * @i: The current guess for the square root
 *
 * Return: The natural square root of n or -1
 */
int square_root_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (square_root_helper(n, i + 1));
}
