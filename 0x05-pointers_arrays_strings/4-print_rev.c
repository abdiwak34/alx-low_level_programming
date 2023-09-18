#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 *@s: string to print in reverse.
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int length = 0;

	while (s[length] != '\0')
	{
		lenght++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
