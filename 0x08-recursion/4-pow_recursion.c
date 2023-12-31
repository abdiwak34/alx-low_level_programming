#include "main.h"

/**
 * _pow_recursion - find the square of the val
 * @x: value to raise
 * @y: power
 *
 * Return: ans
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
