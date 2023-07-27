#include <stdio.h>
#include "main.h"

/**string_toupper - changes all lowercase letters of a string to uppercase
 * @str: is the pointer to the index character of the str
 * Return: char
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
