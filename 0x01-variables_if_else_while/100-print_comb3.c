#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{

			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
