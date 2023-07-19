#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int times;

	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		while (times < 11)
		{
			_putchar(letters);
			times++;
		}
	}
	
	_putchar('\n');
}	
