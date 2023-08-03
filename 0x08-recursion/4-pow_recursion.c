#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: first input param
 * @y: second input para
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);/*an error*/
	}

	if (y == 0)
	{
		return (1);/* Base case: x^0 is 1*/
	}

	return (x * _pow_recursion(x, y - 1));
}

