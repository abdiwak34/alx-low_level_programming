#include "main.h"
/**
 * _memcpy - copy n bytes from src to dest
 * @dedt: where the copied are pasted
 * @src: from where it will be copied
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
