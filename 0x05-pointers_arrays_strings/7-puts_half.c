#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: is the input
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int half_length = length / 2;
	int i;

	for (i = half_length; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
