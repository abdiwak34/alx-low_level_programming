#include <stdlib.h>
#include "main.h"

/**
 * count_words - fun to count
 * @s: str to split
 *
 * Return: number of words
 */
int count_words(char *s)
{
	int f, c, w;

	f = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}

	return (w);
}

/**
 * strtow - splits a str - word
 * @str: str-split
 *
 * Return: pointer to an array of strings (Success)
 *         or NULL (Error)
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

	mat = (char **)malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mat[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	mat[k] = NULL;

	return (mat);
}
