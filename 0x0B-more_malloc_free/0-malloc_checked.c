#include <stdlib.h>
/**
 * malloc_checked - returns void
 * @b: unsigned
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}
