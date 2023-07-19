#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int times;

	while (times < 11)
	{
		char letters;

		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}

		_putchar('\n');

		times++;
	}
}
