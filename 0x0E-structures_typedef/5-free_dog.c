#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - inititalize data of type dog
 * @d: structure type of dog
 * Return: 0
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
