#include "lists.h"
/**
 * listint_len - returns the length of the list
 * @h: the argument of the pointer to the next node
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while(h)
	{
		len++;
		h = h ->next;
	}

	return(len);
}
