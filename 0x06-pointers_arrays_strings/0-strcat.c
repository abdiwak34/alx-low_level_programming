#include "main.h"
#include <string.h>

/**
 * _strcat - concatinate the string
 * @dest: first string
 * @src: second stirng
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
