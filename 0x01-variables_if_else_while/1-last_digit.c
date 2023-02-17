#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - main is a function
 *
 * Return: na 0
 */
int main(void)
{

	int n, digit;

	return (0);


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	return (0);
}
