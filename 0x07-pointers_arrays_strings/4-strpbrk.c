#include "main.h"
#include <string.h>

/**
 * _strpbrk - search a string
 * @s: msin string
 * @accept: string to be searched
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char b;

	b = strpbrk(s, accept);
	return (b);
}
