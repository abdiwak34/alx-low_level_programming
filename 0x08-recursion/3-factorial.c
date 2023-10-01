#include "main.h"

/**
 * factorial - find the factorial of the nr
 * @n: num to be cal
 *
 * Return: fact of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

