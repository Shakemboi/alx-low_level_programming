#include "lists.h"

/**
 * reverse_listint - a function that reverses a
 * linked list
 * @head: pointer to the first node in the list
 * Returns: a pointer to the first node of the reversed list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
