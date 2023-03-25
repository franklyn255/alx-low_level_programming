#include "3-calc.h"

/**
 * op_add - returns the addition of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the subtraction of two integers
 * @a: first integer
 * @b: second integer
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiplication of two integers
 * @a: first integer
 * @b: second integer
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
