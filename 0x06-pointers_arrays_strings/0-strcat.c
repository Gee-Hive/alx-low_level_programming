#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: is the first input
 * @src: is the second input
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Move the pointer to the end of the destination string*/

	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append the source string to the destination string */

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
