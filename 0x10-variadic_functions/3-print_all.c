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
	char c, *s;
	float f;
	int num;
	int separator = 0;
	va_start(lists, format);

	while (format && format[i])
	{
		if (separator)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				c = (char) va_arg(lists, int);
				printf("%c", c);
				separator = 1;
				break;
			case 'i':
				num = va_arg(lists, int);
				printf("%d", num);
				separator = 1;
				break;
			case 'f':
				f = (float) va_arg(lists, double);
				printf("%f", f);
				separator = 1;
				break;
			case 's':
				s = va_arg(lists, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				separator = 1;
				break;
			default:
				break;
		}
		i++;
	}
	va_end(lists);
	printf("\n");
}
