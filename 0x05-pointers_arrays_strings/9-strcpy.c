#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string, pointed to by src
 * @dest: first input
 * @src: second input
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest; /* Save the original pointer to dest */

	/*Copy characters from src to dest, including the null terminator*/
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add the null terminator at the end of the copied string */
	*dest = '\0';

	/* Return the pointer to the beginning of dest */

	return (original_dest);
}
