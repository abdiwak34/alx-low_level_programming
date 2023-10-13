#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of the arg
 * @n: num of the arg
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int k;
	int sum = 0;
	va_list ls;

	va_start(ls, n);

	for (k = 0; k < n; k++)
		sum += va_arg(ls, int);

	va_end(ls);

	return (sum);
}
