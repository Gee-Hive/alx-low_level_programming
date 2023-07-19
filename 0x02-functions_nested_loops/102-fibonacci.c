#include <stdio.h>
#include "main.h"

/**
 * printFibonacciNumbers - Prints the fibonacci number start with 1 and 2
 *
 * @digit: is the parameter passed
 */

void printFibonacciNumbers(int digit)
{
	unsigned long long int firstNumber = 1;
	unsigned long long int secondNumber = 2;
	unsigned long long int next;
	int i;

	printf("%llu", firstNumber);

	for (i = 3; i <= digit; i++)
	{
		printf(", %llu", secondNumber);

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
