#include "main.h"
/**
 * _memset - fills the memory with b
 * @s: pointer to save the address of the char
 * @b: array to be filled
 * @n: size of the array
 * Return: the pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = 0;
	}

	return (s);
}

