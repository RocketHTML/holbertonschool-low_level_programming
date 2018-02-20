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
	return (i + 1);
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
	*(dest + i) = *(src + i);
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
	int size;

	x = malloc(sizeof(dog_t));
	if (!x)
		return (0);
	size = _strlenNULL(name);
	x->name = malloc(size);
	if (!x->name || !size)
	{
		free(x);
		return (0);
	}
	x->age = age;
	size = _strlenNULL(owner);
	x->owner = malloc(size);
	if (!x->owner || !size)
	{
		free(x->name);
		free(x);
		return (0);
	}
	_strcpy(x->name, name);
	_strcpy(x->owner, owner);
	return (x);
}
