#include "lists.h"

/**
 * listint_len - return the numnbers of element in
 * a linked list
 * @h: head of list
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
