#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog struct.
 * @d: A pointer to the dog struct to free.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

