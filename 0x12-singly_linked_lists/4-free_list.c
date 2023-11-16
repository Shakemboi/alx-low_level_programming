#include <stdlib.h>
#include "lists.h"

/**
 * free_list - it frees agiven linked list
 * @head: its the list_t list which is to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
