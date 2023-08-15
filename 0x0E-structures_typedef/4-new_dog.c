#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: first value
 * @age: second value
 * @owner: third value
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k = 0;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return ('\0');
	while (name[i] != '\0')
	{
		i++;
	}
	ptr->name = malloc(sizeof(char) * (i + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return ('\0');
	}
	for (k = 0; k <= i; k++)
	{
		ptr->name[k] = name[k];
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	ptr->owner = malloc(sizeof(char) * (j + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);/*Free the previously allocated memory*/
		free(ptr);
		return ('\0');
	}
	for (k = 0; k <= j; k++)
	{
		ptr->owner[k] = owner[k];
	}
	ptr->age = age;
	return (ptr);
}
