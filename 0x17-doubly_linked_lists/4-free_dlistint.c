#include "lists.h"


/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Description: This function frees all the nodes in a doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
