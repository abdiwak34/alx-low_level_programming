#include "lists.h"
/**
 * print_listint - prints number of the elements
 * @h: the pointer passed to the function
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while(h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return(len);
}
