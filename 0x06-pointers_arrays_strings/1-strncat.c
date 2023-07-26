#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * except thatit will use at most n bytes from src
 * and src does not need to be null-terminated if it contains n or more bytes
 * @dest: first input param
 * @src: second input param
 * @n: third inout param
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Move the pointer to the end of the destination string */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
