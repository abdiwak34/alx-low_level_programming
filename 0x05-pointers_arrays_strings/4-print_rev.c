#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
<<<<<<< HEAD
 *@s: string to print in reverse.
=======
 *@s: the string to print in reverse.
>>>>>>> 25af3a8bf71fc9395b3b3cdf09e73683c485d2a4
 *
 */

void print_rev(char *s)
{
	int i = 0;
<<<<<<< HEAD
	int length = 0;

	while (s[length] != '\0')
	{
		lenght++;
=======
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
>>>>>>> 25af3a8bf71fc9395b3b3cdf09e73683c485d2a4
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
