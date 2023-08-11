#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc -function allocates memory for an array, using malloc
 * @nmemb: first input param
 * @size: second input param
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
