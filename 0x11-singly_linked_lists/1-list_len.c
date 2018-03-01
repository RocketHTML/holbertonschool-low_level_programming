#include "lists.h"
/**
 * list_len - count elements in list
 * @h: list
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	if (!h)
		return (i);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
