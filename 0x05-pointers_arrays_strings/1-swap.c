#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a:  is the first input
 * @b: is the second input
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
