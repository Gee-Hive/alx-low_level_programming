#include <stdio.h>
#include "main.h"

/**
 * rot13 -  encodes a string using rot13.
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int a;
	int b;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == d1[b])
			{
				s[a] = d2[b];
				break;
			}
		}
	}
	return (s);
}

