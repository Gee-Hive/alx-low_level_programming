#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit passed or not
 * @a: is the input or parameter passed in
 * Return: 0
 */

int _isdigit(int a)
{
	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
