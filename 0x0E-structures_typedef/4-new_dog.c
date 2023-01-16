#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - inititalize data of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: 0
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Ndog;
	int a, b, c;
	char *Nname, *Nowner;

	Ndog = malloc(sizeof(dog_t));
	if (Ndog == NULL)
		return (NULL);

	for (a = 0; name[a] != '\0'; a++)
		;
	for (b = 0; owner[b] != '\0'; b++)
		;

	Nname = malloc(sizeof(char) * a + 1);
	if (Nname == NULL)
	{
		free(Ndog);
		return (NULL);
	}
	Nowner = malloc(sizeof(char) * b + 1);
	if (Nowner == NULL)
	{
		free(Nname);
		free(Ndog);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		Nname[c] = name[c];
	for (c = 0; c <= b; c++)
		Nowner[c] = owner[c];

	Ndog->name = Nname;
	Ndog->age = age;
	Ndog->owner = Nowner;

	return (Ndog);
}
