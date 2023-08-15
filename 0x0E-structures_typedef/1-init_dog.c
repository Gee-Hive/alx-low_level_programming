#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: second input param
 * @age: third input param
 * @owner: fourth input para
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
