#include <stdio.h>
#include "main.h"

/**
 * print_triangle -  draws triangle
 * @size: input param
 */

void print_triangle(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
