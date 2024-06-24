#include "dog.h"
#include <stdio.h>

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
