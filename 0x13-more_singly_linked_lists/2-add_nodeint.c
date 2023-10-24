#include "lists.h"

/**
 * add_ndeint - add a node to the first node
 * @head: the pointer to the first head
 * @n: the data of added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	struct list_t *new_node = (struct list_t*) malloc(sizeof(stuct list_t));
	new_node -> data = n;
	new_node -> next = head;
	head = new_node;

	return(head);
}
