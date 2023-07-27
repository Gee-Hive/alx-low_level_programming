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
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;

	}

	dest[i] = '\0';

	return (dest);
}
