#include <stdio.h>
#include <stdlib.h>

/**
 * main -  entry point that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector(contain amount of argument)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;
	char error[6] = "Error";

	if (argc != 3)
	{
		printf("%s\n", error);

		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}

