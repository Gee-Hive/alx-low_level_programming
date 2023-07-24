#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is the input param
 * Return: 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
