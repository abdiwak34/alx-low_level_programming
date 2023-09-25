#include "main.h"
#include <string.h>

/**
 * _strstr - locates the substring
 * @haystack: first string
 * @needle: second string
 * Return: if any
 */

char *_strstr(char *haystack, char *needle)
{
	char *d;
	
	d = strstr(haystack, needle);
	return (d);
}
