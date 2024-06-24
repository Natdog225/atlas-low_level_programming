#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable
 * @d: pointer to the struct dog
 * @name: name to set
 * @age: age to set
 * @owner: owner to set
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}

#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct representing a dog.
 * @name: name of the dog (%s)
 * @age: age of the dog (%f)
 * @owner: owner of the dog (%s)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */