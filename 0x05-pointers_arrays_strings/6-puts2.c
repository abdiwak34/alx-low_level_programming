#include "main.h"

/**
 * puts2 - prints in a new line every char
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
