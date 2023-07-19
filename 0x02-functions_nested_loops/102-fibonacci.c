#include <stdio.h>
#include "main.h"

/**
 * printFibonacciNumbers - Prints the fibonacci number start with 1 and 2
 *
 * @digit: is the parameter passed
 */

void printFibonacciNumbers(int digit)
{
	int firstNumber = 1;
	int secondNumber = 2;
	int next;
	int i;

	printf("%d, %d", firstNumber, secondNumber);

	for (i = 3; i <= digit; i++)
	{
		next = firstNumber + secondNumber;
		printf(", %d", next);

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
	printFibonacciNumbers(50);

	return (0);
}
