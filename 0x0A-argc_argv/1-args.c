#include <stdio.h>

/**
 * main - Entry point to print number of arguments passed in
 * @argc: argument count
 * @argv: argument vector( array that contains the argument)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
