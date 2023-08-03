#include <stdio.h>
#include "main.h"
/**
 * _sqrt_helper - helper function used for recursive binary search
 * @n: we want to find the square root
 * @start: search range.
 * @end: search range.
 * Return: int
 */

int _sqrt_helper(int n, int start, int end)
{
	int mid, square;

	if (start > end)
	{
		return (-1);/*If n does not have a natural square root, return -1*/
	}

	mid = start + (end - start) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);/*Found the natural square root*/
	}

	if (square < n)
	{
		return (_sqrt_helper(n, mid + 1, end));/*Search the right half*/
	}

	return (_sqrt_helper(n, start, mid - 1));/*Search the left half*/
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input param
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);/*indicate an error*/
	}

	return (_sqrt_helper(n, 0, n));/* Start the search in the range [0, n]*/
}
