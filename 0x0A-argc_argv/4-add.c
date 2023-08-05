#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, add, result;
	char error[] = "Error", *check_alpha;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			check_alpha = argv[i];
			while (*check_alpha != 0)
			{
				if (*check_alpha < 47 || *check_alpha > 57)
				{
					printf("%s\n", error);
					return (1);
				}
				check_alpha++;
			}
			result = atoi(argv[i]);
			add += result;
		}
		printf("%d\n", add);
	}
	else
		printf("%d\n", 0);
	return (0);
}
