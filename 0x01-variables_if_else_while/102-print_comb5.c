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

	for (x = 0; x <= 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			if (x < 10)
			{
				putchar('0');
			}
			 printf("%d", x);

			if (y < 10)
			{
				putchar('0');
			}
			printf("%d", y);

			if (x != 98 || y != 99)
			{
				printf(",");
			}
		}
	}

	putchar('\n');

	return (0);
}
