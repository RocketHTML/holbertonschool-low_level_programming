#include <stdio.h>
#include "dog.h"
/**
 * print_dog - returns void
 * @d: struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if ((*d).name)
		printf("Name: %s\n", (*d).name);
	else
		printf("Name: (nil)\n");
	if ((*d).age)
		printf("Age: %f\n", (*d).age);
	else
		printf("Age: 0\n");
	if ((*d).owner)
		printf("Owner: %s\n", (*d).owner);
	else
		printf("Owner: (nil)\n");
}
