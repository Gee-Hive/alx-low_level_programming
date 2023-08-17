#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first defined constant variable
 * @... : variable number of arguments
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		/*retrieves the next argument from the va_list and adds to var sum*/
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}
