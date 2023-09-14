#include "main.h"
/**
 * print lower alphabet 10times
 * return void
 */
void print_alphabet_x10(void)
{
	int i;
	for(i=0;i<10;i++)
	{
		char alpha = 'a';
		while(alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar(\n);
	}
}
