#include <stdio.h>
#include "main.h"

/**
 * print_line - prints lines
 * @n: is the input passed in
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
