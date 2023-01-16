#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - inititalize data of type dog
 * @d: structure type of dog
 * Return: 0
*/

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
