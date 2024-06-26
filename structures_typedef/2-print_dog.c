#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints a struct dog.
 * @d: The dog structure to be printed.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\nAge: %.6f\nOwner: %s\n",
		   d->name ? d->name : "(nil)",
		   d->age,
		   d->owner ? d->owner : "(nil)");
}
