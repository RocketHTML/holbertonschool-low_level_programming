#include <stdlib.h>
/**
 * calloc - returns void
 * @nmemb: unsigned
 * @size: unsigned
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(size * nmemb);
	if (!p)
		return (0);
	return (p);
}
