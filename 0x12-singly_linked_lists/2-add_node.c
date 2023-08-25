#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node
 * @head: pointer of node
 * @str: string with info
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int c = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return ('\0');
	}

	/* Duplicate the input string using strdup */
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return ('\0');
	}

	new_node->next = *head;/*Link the new node to the current head*/

	*head = new_node; /* Update the head pointer to point to the new node */

	while (str[c] != '\0')
	{
		c++;
	}
	new_node->len = c;
	return (new_node);
}
