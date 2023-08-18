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
					printf("%c%s", va_arg(lists, int), separator);
					break;
				case 'i':
					printf("%d%s", va_arg(lists, int), separator);
					break;
				case 'f':
					printf("%f%s", va_arg(lists, double), separator);
					break;
				case 's':
					str = va_arg(lists, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", str, separator);
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

