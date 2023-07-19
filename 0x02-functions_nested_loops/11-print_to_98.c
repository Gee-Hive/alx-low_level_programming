#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  print all natural numbers from n to 98
 *
 * @n: parameter or input passed in
 */

void print_to_98(int n)
{
	if (n < 99)
	{
		printf("%d", n);

		if (n < 98)
		{
			printf(", ");
			print_to_98(n + 1);
		}
		else if (n > 98)
		{
			print(", ");
			print_to_98(n - 1);
		}
		else
		{
			printf("\n");
		}
	}
}
