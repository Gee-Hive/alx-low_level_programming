#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: first value
 * @f: function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return ('\0');
	}
	f(name);
}
