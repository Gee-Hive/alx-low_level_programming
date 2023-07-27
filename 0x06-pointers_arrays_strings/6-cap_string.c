#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: its argument, which points to the first character of the input string.
 * Return: char
 */

char *cap_string(char *str)
{
	int cap_next = 1;
	char *ptr = str;

	while (*ptr)
	{
		if (isspace(*ptr) || ispunct(*ptr))
		{
			cap_next = 1;
		}
		else if (cap_next)
		{
			*ptr = toupper(*ptr);
			cap_next = 0;
		}

		ptr++;
	}

	return (str);
}
