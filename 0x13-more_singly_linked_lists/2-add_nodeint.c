#include "lists.h"

/**
 * add_ndeint - add a node to the first node
 * @head: the pointer to the first head
 * @n: the data of added node
 * Return: new_node will be returned
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	 new_node = malloc(sizeof(stuct list_t));
	if(!new_node)
		return(NULL);

	new_node -> n = n;
	new_node -> next = *head;
	*head = new_node;

	return(new_node);
}
