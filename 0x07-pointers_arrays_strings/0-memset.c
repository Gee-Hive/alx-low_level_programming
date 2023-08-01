#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: first input a pointer to the memory area that will be filled
 * @b: a constant byte that will be used to fill the memory area
 * @n: the amount of byte to be filled in the memory area
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}

	return (s);
}
