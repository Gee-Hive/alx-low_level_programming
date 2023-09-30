#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}

		m = m >> 1;
		n = n >> 1;
	}

	return (c);
}
