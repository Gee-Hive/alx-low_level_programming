#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tp = head;

		head = head->next;
		free(tp->str);
		free(tp);
	}
}
