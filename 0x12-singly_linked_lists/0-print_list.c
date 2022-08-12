#include "lists.h"
#include <stdio.h>

/**
 * print_list - print element of linkedlist
 * @h: linked list
 * Returne: numbr of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str != NULL ? current->str : "(nul)");
		current = current->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
