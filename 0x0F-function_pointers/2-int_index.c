#include "function_pointers.h"

/**
 * int_index - searches integer
 * @array: searched array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array && cmp)
	{
		for (k = 0; k < size; k++)
		{
			if (cmp(array[k]) != 0)
				return (k);
		}
	}

	return (-1);
}
