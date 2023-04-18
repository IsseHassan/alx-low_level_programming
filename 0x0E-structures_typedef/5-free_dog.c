#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for dog_t struct
 * @d: pointer to dog_t struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
