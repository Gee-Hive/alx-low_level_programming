#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all the data
 * @head: pointer to begin of the lincked list
 *
 * Return: sum of all datas
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	listint_t *tp = head;

	if (head == NULL)
	{
		return (0);
	}

	while (tp->next != NULL)
	{
		s += tp->n;
		tp = tp->next;
	}
	s += tp->n;

	return (s);
}
