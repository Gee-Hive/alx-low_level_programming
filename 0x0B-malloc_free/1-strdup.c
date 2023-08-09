#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - creates an array of char
 * @str: input param
 * Return: char
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	duplicate = malloc(i * sizeof(char));

	if (duplicate == 0)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		duplicate[j] = str[j];
	}

	return (duplicate);
}
