#include "dog.h"

#include <stdlib.h>

#include <stdio.h>

/**
 * print_dog - Prints all the elements of the struct dog
 * @d: The pointer to struct dog elements
 **/

void print_dog(struct dog *d)

{

	if (d == NULL)

		return;

	if (d->name == NULL)

		printf("Name: (nil)\n");

	else

		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)

		printf("Owner: (nil)\n");

	else

		printf("Owner: %s\n", d->owner);

}