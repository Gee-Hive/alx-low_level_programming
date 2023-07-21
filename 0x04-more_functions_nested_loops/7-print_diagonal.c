#include <stdio.h>
#include "main.h"

/**
 * print_diagonal- prints a diagonal line
 * @n: input param
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	 _putchar('\n');
}
