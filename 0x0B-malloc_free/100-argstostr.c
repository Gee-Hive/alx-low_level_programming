#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - function concatenates all the arguments of your program.
 * @ac: pointer first param
 * @av: second para
 *
 * Return: char
 */



char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, position = 0, total_length = 0;


	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*Calculate the total length of the concatenated string*/

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	/* Allocate memory for the concatenated string*/
	concatenated = malloc(total_length + 1);
	if (concatenated == NULL)
	{
		return ('\0'); /* Memory allocation failed*/
	}
	/* Concatenate the arguments with newline characters*/

	for (i = 0; i < ac; i++)
	{
		strcpy(concatenated + position, av[i]);
		position += strlen(av[i]);
		concatenated[position++] = '\n';
	}
	concatenated[position] = '\0'; /*Null-terminate the string*/
	return (concatenated);
}
