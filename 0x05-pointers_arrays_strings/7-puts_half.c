#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of the string
 * @str: the arg that takes half of the string
 */
void puts_half(char *str)
{
	int n;

	int i;

	n = strlen(str) / 2;
	for (i = 0; i <= n; i++)
	{
		_putchar(str);
	}
}
