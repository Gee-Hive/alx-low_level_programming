#include <stdio.h>
#include "lists.h"

/**
 * print_listint - functio to print all elemnets
 * @h: number of elements
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
