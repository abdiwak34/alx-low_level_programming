#include "main.h"
/**
 * _puts - prints the string
 * @str: argument to store string variable
 */
void _puts(char *str)
{
	int i;

	int len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
