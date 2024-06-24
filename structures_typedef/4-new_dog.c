#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog, or NULL if it's lost.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	// Allocate memory for name and owner strings
	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);

	// Check if allocations were successful
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		// Free any allocated memory
		if (new_dog->name != NULL)
		{
			free(new_dog->name);
		}
		if (new_dog->owner != NULL)
		{
			free(new_dog->owner);
		}
		free(new_dog);
		return (NULL);
	}

	// Copy strings to the allocated memory
	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);

	return (new_dog); // Return the newly created dog
}
