#include "main.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - prints an unsigned int in binary
 * @n: first input
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;
	unsigned long int bit;

	int bytes = sizeof(n) * 8;

	for (i = bytes - 1; i >= 0; i--)
	{
		bit = n >> i;

		if (bit & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || i == 0)
		{
			_putchar('0');
		}
	}
}
