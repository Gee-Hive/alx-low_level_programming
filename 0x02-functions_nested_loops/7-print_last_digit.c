#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last digit of a number passed in
 *
 * @num: is the parameter or input value passed into the function
 * Return: 1 (success)
 */

int print_last_digit(int num)
{
	int lastDigit = num % 10;

	int result = (lastDigit * 10) + lastDigit;

	return (result);
}
