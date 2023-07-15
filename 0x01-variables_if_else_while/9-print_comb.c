#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = x; y < 10; y++)
		{
			putchar(x + '0');
			putchar(',');
			putchar(y + '0');
			putchar(',');
		}
	}

	return (0);
}
