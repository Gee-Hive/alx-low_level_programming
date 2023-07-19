#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @num: parameter passed in
 * Return: 1 (success)
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}

	return (num);
}
