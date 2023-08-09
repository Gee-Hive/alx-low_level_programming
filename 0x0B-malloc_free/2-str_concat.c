#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first input
 * @s2: second input
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *box;
	int a = 0, b = 0, c = 0, scope;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	c = a + b + 1;
	box = malloc(c * sizeof(char));
	if (box == NULL)
		return ('\0');
	for (scope = 0; scope < a; scope++)
	{
		box[scope] = s1[scope];
	}
	for (scope = 0; scope <= b; scope++)
	{
		box[scope + a] = s2[scope];
	}
	return (box);
}
