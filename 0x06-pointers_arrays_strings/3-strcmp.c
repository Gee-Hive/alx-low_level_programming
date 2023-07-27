#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: is the first input param
 * @s2: is the second input string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
