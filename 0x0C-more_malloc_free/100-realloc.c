#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: first input param
 * @old_size: second input param
 * @new_size: third input param
 * Return: pointer integer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i = 0, l;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return ('\0');
	}

	if (new_size < old_size)
		l = new_size;
	else
		l = old_size;

	p = malloc(new_size);

	if (p == NULL)
		return ('\0');
	for (; i < l; i++)
	{

		p[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (p);
}
