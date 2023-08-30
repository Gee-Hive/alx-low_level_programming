#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer of the lincked list
 * @index: index of the node starting in 0
 *
 * Return: value in the index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	listint_t *tp = head;

	while (tp != NULL)
	{
		if (c == index)
		{
			return (tp);
		}
		tp = tp->next;
		c++;
	}
	return (NULL);
}
