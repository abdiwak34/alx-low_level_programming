#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - fun print the name
 * @name: name
 * @f: ptr to the fun
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
