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
	int commaFlag = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			if (commaFlag)
			{
				putchar(',');
				putchar(' ');
			}
			commaFlag = 1;
			putchar('0' + i);
			putchar('0' + j);
		}
	}

	putchar('\n');

	return (0);
}
