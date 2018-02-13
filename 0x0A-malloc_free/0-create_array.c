#include <stdlib.h>
/**
 * create_array - returns char array
 * @size: unsigned int size of array
 * @c: char
 * Return: char array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	a = malloc(size);
	while (i < size)
		a[i++] = c;
	return (a);
}
