#include <stdlib.h>
/**
 * _calloc - returns void
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int bytes = nmemb * size;

	if (size <= 0 || nmemb <= 0)
		return (0);
	p = malloc(bytes);
	if (!p)
		return (0);
	for (bytes = bytes - 1; bytes > 0; bytes--)
		p[bytes] = 0;
	p[0] = 0;
	return ((void *)p);
}
