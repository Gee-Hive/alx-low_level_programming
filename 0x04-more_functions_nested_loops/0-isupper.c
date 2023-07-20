#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: is the input passed inside the func
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
