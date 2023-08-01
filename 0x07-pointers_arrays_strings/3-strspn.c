#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept:  a pointer to the set of characters to match
 * Return: number of bytes which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int found = 1;

	char *p;

	while (*s != '\0' && found)
	{
		found = 0;

		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				count++;
				found = 1;
				break;
			}
		}
		s++;
	}
	return (count);
}
