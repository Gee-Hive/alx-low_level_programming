#include <stddef.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Entry point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int response = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			response <<= 1;
			response += (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (response);
}
