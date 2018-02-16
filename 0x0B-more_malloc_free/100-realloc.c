#include <stdlib.h>
/**
 * _realloc - returns void
 * @ptr: void pointer
 * @old_size: unsigned int bytes
 * @new_size: unsigned int bytes
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *pt = ptr;
	unsigned int i;

	if (!ptr)
		return (malloc(new_size));
	else if (!new_size)
	{
		free(ptr);
		return (0);
	}

	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (!p)
		return (0);

	for (i = 0; i < new_size && i < old_size; i++)
		p[i] = pt[i];
	free(ptr);
	return (p);
}
