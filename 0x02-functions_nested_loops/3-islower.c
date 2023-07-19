#include <stdio.h>
#include "main.h"

/**
 *  _islower - checks for lowercase character
 *
 *  @c: is the parameter  passed in the function _islower
 *
 *  Return: 1 if int c is lowercase
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
