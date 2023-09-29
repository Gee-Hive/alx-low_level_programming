#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int c;

	if (index > 63)
	{
		return (-1);
	}
	c = 1 << index;
	return ((n & c) > 0);
}
