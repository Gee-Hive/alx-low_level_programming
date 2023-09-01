#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: input
 * @index: index
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk = 1UL << index;

	*n &= ~msk;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return (1);
}
