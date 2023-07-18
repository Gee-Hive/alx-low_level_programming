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

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			if (i != 0)
			{
				putchar('0' + i / 10);
				putchar('0' + i % 10);
			}
			else
			{
				putchar('0');
				putchar('0');
			}
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
