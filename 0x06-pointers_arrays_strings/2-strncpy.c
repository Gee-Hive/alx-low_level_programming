#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest:  is the destination
 * @src: is the source string
 * @n: is the number of char
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}

	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}
