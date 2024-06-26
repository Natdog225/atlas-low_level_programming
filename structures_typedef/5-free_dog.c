#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory
 * @d: Pointer to the dawg to set them puppers free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
	
}
