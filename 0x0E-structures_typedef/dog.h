#ifndef _DOG_HEADER
#define _DOG_HEADER

/**
 * struct dog - creating a new structure of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} v_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
