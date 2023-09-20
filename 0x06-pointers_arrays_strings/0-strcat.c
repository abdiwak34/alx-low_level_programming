#include "main.h"
#include <string.h>

/**
 * _strcat - connect to string
 * @dest: first string
 * @src: second string
 * Return: ptr
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
