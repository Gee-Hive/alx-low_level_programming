#include <stdio.h>
#include "main.h"

/**
 * is_prime_helperfunc - function used for recursive search
 * @n: to check for primality
 * @divisor: the divisor to be tested.
 * Return: int
 */

int is_prime_helperfunc(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1); /*Base case: If divisor reaches 1, n is prime*/
	}

	if (n % divisor == 0)
	{
		return (0); /*If n is divisible by divisor, n is not prime*/
	}

	/*Recursive call with the next divisor*/
	return (is_prime_helperfunc(n, divisor - 1));
}

/**
 * is_prime_number -returns 1 if the input integer is a prime number,or return0
 * @n: input param
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);/*Numbers less than or equal to 1 are not prime*/
	}

	/*Start the search for divisors from (n - 1)*/
	return (is_prime_helperfunc(n, n - 1));
}
