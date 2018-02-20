#include "dog.h"
#include <stdlib.h>

/**
 * _strlenNULL - return string length
 * @x: string to process
 * Return: returns length + null
 */
int _strlenNULL(char *x)
{
	int i;

	if (!x)
		return (0);
	for (i = 0; x[i]; i++)
		;
	return (i);
}

/**
 * _strcpy - copies from one string to another
 * @dest: destination
 * @src: source
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	if (!src || !dest)
		return;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
}

/**
 * new_dog - returns dog_t
 * @name: char array
 * @age: float
 * @owner: char array
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;

	x = malloc(sizeof(dog_t));
	if (!x)
		return (0);
	x->name = malloc(_strlenNULL(name));
	if (!x->name)
		return (0);
	x->age = age;
	x->owner = malloc(_strlenNULL(owner));
	if (!x->owner)
		return (0);
	_strcpy(x->name, name);
	_strcpy(x->owner, owner);
	return (x);
}
