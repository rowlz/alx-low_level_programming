#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - inititalize data of type dog
 * @d: structure type of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: 0
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
