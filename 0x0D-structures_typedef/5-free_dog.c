#include "dog.h"
/**
 * free_dog - returns void
 * @d: dog_t array
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
