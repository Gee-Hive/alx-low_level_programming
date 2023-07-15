#include <stdio.h>

/**
 * main - Entry Level
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar('0' + num); /* print number 0-9 */
		}
		else
		{
			putchar('a' + (num - 10)); /* print letters a-f */
		}
	}

	putchar('\n');

	return (0);
}
