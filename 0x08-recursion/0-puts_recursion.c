#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string in reverse.
 * @s: is the input param
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');/*Print a newline indicating as (base case)*/
		return;
	}

	_putchar(*s);/*Print the current character*/
	_puts_recursion(s + 1);/*Recursive call with the next character*/
}
