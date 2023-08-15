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
	/*implement name action */
	ptr->name = malloc(sizeof(char) * (i + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return ('\0');
	}
	for (; k <= i; k++)
	{
		ptr->name[k] = name[k];
	}
	/*implement owner action*/
	ptr->owner = malloc(sizeof(char) * (i + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);/*Free the previously allocated memory*/
		free(ptr);
		return ('\0');
	}
	for (; k <= j; k++)
	{
		ptr->owner[k] = owner[k];
	}

	/*implement age action*/
	ptr->age = age;

	/*return pointer*/
	return (ptr);
}
