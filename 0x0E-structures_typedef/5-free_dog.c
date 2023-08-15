#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees them all
 * @d: structure
 * Return: pinter to dog
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
