#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints number of the elements
 * @h: position of the singly linked
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	/* Traverse the linked list and count the nodes */
	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
