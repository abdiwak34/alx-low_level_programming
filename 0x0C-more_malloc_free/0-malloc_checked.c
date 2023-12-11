#include<stdlib.h>
#include "main.h"

/**
 * *malloc_checked - memory allocator
 * @b: num of bytes
 *
 * Return: a ptr
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
