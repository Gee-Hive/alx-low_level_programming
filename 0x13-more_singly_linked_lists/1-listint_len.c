#include <stdio.h>
#include "lists.h"

/**
 * listint_len - number of elements in a linked list
 * @h: number of elements
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
