#include <stdio.h>
#include "main.h"

/**
 * print_array - print n element of an array of integers
 * @a: first input param
 * @n: second input param
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
