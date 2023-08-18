#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: first input param
 */

void print_all(const char * const format, ...)
{
	va_list lists;
	int i = 0;
	char *str;
	char *separator = ", ";

	va_start(lists, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(lists, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(lists, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(lists, double));
					break;
				case 's':
					str = va_arg(lists, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(lists);
	printf("\n");
}

