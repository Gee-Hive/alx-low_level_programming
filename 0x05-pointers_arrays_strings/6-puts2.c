#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input params
 */

void puts2(char *str)
{
	const char *ptr = str;

	while (*ptr != '\0')
	{
		_putchar(*ptr);

		ptr += 2;
	}
	_putchar('\n');
}
