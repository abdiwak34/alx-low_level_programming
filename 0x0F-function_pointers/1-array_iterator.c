#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - give function as parameter on each element of an array
 * @array: array work with function
 * @size: size of an array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (!array || !action)
		return;

	for (k = 0; k < size; k++)
		action(array[k]);
}
