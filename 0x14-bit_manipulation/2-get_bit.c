#include <stdio.h>
#include "main.h"

/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int msk = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if (n & msk)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
