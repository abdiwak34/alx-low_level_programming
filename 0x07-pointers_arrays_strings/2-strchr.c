#include "main.h"
#include <stdio.h>

/**
 * _strchr - finding first occurance 
 * @s: string  to be checked 
 * @c: char that to be found
 * Return: the pointer to the occurancce of the char
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
																return (NULL);
															}
														}
}
