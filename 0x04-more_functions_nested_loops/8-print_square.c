#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: input param
 */

void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (size == 0)
			{
				_putchar('\n');
				return;
			}
			_putchar('#');
		}

		_putchar('\n');
	}

}
