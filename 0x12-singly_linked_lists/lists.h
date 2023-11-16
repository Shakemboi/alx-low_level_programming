#ifndef LINKED
#define LINKED

#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * struct list_t - its singly linked list
 * @str: sring - (for malloc 'ed string)
 * @len: its the string's length
 * @next: it points to the next node
 */
typedef struct list_t
{
	char *str;

	unsighned int len;

	struct list_t *next;

} list_t:
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
