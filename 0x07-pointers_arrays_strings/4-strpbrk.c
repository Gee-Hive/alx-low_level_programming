#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: points to the string to be searched
 * @accept: points to the set of bytes to search for
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or return NULL if none found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}

	return (NULL);
}
