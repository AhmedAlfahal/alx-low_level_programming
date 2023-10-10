#include "dog.h"

/**
*	free_dog - frees a dog
*
*	@d: dog_t *
*
*  Return: void
**/

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
