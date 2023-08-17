#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: first value
 * @size: function
 * @cmp: function
 *
 * Return: Value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int val = 0, i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		val = cmp(array[i]);

		if (val != 0)
		{
			return (i);
		}
	}

	return (-1);
}
