#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: address of the linked list
 *
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tp = head;

		head = head->next;
		free(tp);
	}
}
