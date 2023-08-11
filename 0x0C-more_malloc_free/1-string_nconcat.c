#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: first input param
 * @s2: second input param
 * @n: third input param
 * Return: a char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}	
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
		return ('\0');
	for (size = 0; size < i; size++)
	{
		p[size] = s1[size];
	}
	for (size = 0; size < (i + n); size++)
	{
		p[size] = s2[size - i];
	}
	p[size] = '\0';
	return (p);
}
