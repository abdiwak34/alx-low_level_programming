#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14, ten times
 * followed by a new line
 */
void more_numbers(void)(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
	}

	_putchar('\n');
}
