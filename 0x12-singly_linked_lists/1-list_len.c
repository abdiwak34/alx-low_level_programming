#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the length of the list
 * @h: ptr to list
 *
 * Return: length of the node
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
