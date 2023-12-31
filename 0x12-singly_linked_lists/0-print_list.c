#include <stdio.h>
#include "main.h"

/**
 * print_list - prints the list of the singly linked list
 *
 * @*h: the pointer to the next node
 *
 * Return: the number of the node
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
