#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 */

void more_numbers(void)
{
	int j = 0 ;

	while (j < 10)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			printf("%d", i);
		};
		printf("\n");
		j++;
	}
	_putchar('\n');
}

