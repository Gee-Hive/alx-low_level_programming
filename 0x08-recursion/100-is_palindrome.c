#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * is_palindrome_helper - function used for recursive palindrome checking
 * @start: the current character at the beginning of the string
 * @end: pointer to the current character at the end of the string.
 * Return: int
 */

int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		/*Base case: If start and end meet or cross, it's a palindrome*/
		return (1);
	}

	if (*start != *end)
	{
		/*If characters at start and end are not equal, it's not a palindrome*/
		return (0);
	}

	/* Recursive call with the next characters */
	return (is_palindrome_helper(start + 1, end - 1));
}

/**
 * is_palindrome - entry point to check whether the input is palindrome or not
 * @s: input param
 * Return: int
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
		return (1);/*An empty string or single character is a palindrome*/
	}

	/*start recursive check from the beginning and end of the string*/
	return (is_palindrome_helper(s, s + length - 1));
}
