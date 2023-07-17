#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int a, b, c;
	int commaFlag = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				if (commaFlag)
				{
					putchar(',');
					putchar(' ');
				}
				commaFlag = 1;
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
			}
		}
	}

	putchar('\n');

	return (0);
}
