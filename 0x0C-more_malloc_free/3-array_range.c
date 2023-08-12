#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first input param
 * @max: second input param
 * Return: pointer integer
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return ('\0');
	}

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
	{
		return ('\0');
	}

	for (i = 0; i <= max; i++)
	{
		p[i] = min;
		min += 1;
	}

	return (p);
}
