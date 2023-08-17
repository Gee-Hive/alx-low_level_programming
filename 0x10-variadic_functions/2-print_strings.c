#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n:  is the number of strings passed to the function
 * @... : is the variable number of argument undefined
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lists;
	const char *s;
	unsigned int i;

	va_start(lists, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(lists, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (separator !=  NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(lists);
	printf("\n");
}
