#include "dog.h"
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
int i;
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
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

	i = 0;
while (name[i] != '\0') 
{
    new_dog->name[i] = name[i];
    i++;
}
new_dog->name[i] = '\0'; 

i = 0;
while (owner[i] != '\0') 
{
    new_dog->owner[i] = owner[i];
    i++;
}
new_dog->owner[i] = '\0';

	return (new_dog);
}
