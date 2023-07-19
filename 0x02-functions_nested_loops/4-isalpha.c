#include <stdio.h>
#include "main.h"

/**
 * _isalpha -  checks for alphabetic character either upper or lowercase
 *
 * @c: is the input or parameter passed into _isalpha function
 * Return: 1 (if upper or lowercase)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c <= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
