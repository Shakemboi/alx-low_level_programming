#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Returns: 1 if it succeeded, -1 if it failed
 * Return: 1 if successful, -1 if the node
 * at the specified index does not exist
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int b = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (b < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		b++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
