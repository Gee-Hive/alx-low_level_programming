#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument counts
 * @argv: array with arguments(argument vector)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for(n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
