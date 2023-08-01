#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: pointer to the memory area
 * @c: character to locate in the string.
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s); /* Found the character, return the pointer to its location */
		}

		s++; /* move to the next character in the string */
	}

	return (NULL); /*Character not found, return NULL.*/
}
