#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to a linked list
 *
 */

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *tp = *head;

		*head = (*head)->next;
		free(tp);
	}
	*head = NULL;
}
