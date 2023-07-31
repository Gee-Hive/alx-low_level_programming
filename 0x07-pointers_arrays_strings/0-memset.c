#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: first input
 * @b: second input
 * @n: thrid input
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
