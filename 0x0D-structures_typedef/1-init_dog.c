#include "dog.h"
/**
 * init_dog - initialize struct
 * @d: struct
 * @name: char array
 * @age: float
 * @owner: char array
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
