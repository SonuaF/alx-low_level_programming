#include "dog.h"

#include <stdio.h>

#include <stdlib.h>

/**
 * free_dog - Free the memory the dog
 * @d: The memory to free
 **/



void free_dog(dog_t *d)

{

	if (d != NULL)

	{

		free(d->name);

		free(d->owner);

		free(d);

	}

}
