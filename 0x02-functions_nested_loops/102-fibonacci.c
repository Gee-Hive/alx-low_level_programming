#include <stdio.h>
#include "main.h"

/**
 * printFibonacciNumbers - Prints the fibonacci number start with 1 and 2
 *
 * @digit: is the parameter passed
 */

void printFibonacciNumbers(int digit)
{
	unsigned  int firstNumber = 1;
	unsigned  int secondNumber = 2;
	unsigned  int next;
	int i;

	printf("%u", firstNumber);

	for (i = 3; i <= digit; i++)
	{
		printf(", %u", secondNumber);

		next = firstNumber + secondNumber;
		firstNumber = secondNumber;
		secondNumber = next;
	}

	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	printFibonacciNumbers(49);

	return (0);
}
