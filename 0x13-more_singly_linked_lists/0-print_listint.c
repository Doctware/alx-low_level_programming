#include "lists.h"

/**
 * print_listint - print elements of linkedlist
 * @h: head
 * Return: length of a string
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
