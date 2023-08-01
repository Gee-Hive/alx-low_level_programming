#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * _memcpy - copies memory area
 * @dest: (to)
 * @src: (from)
 * @n: copies amout of n bytes indicated
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
