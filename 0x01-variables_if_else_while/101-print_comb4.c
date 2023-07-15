#include <stdio.h>

/**
 * main - Entry Point
 *
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int x, y, z;
	int commaFlag = 0;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 2; y++)
		{
			if (x != y)
			{
				for (z = 0; z <= 2; z++)
				{
					if (z != x && z != y)
					{
						if (commaFlag)
						{
							putchar(',');
							putchar(' ');
						}
						commaFlag = 1;
						putchar('0' + x);
						putchar('0' + y);
						putchar('0' + z);
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
