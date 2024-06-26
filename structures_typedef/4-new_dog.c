#include "dog.h"
#include "main.h"
#include <string.h>

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog, or NULL if it's lost.
 */
dog_t *new_dog(const char *name, float age, const char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
	{
		return NULL; // Handle memory allocation failure
	}

	new_dog->name = malloc(_strlen(name) + 1);
	new_dog->owner = malloc(_strlen(owner) + 1);

	if (!new_dog->name || !new_dog->owner)
	{
		free(new_dog->name); // Free what was allocated
		free(new_dog->owner);
		free(new_dog);
		return NULL;
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return new_dog;
}