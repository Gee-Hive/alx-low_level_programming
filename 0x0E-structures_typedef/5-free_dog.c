#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: pointer d
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/*Free memory for name and owner*/
		free(d->name);
		free(d->owner);
		
		free(d);/*Free memory for the dog structure*/
	}
}
