#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: input
 * @m: bits
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorRes = n ^ m;
	unsigned int c = 0;

	while (xorRes > 0)
	{
		c += xorRes & 1;
		xorRes >>= 1;
	}

	return (c);
}
