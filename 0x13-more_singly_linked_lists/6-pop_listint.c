#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node from the lincked list
 * @head: pointer to the begin of the lincked list
 *
 * Return: data that was in the node
 */

int pop_listint(listint_t **head)
{
	int data = (*head)->n;

	listint_t *tp = *head;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;

	free(tp);
	return  (data);
}
