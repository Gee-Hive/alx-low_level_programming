#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string -  reverses a string
 *
 * @s: input param
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int a, b;

	for (a = 0, b = length - 1; a < b; a++, b--)
	{
		char t = s[a];

		s[a] = s[b];
		s[b] = t;
	}
}
