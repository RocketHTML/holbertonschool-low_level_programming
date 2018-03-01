#include "lists.h"
/**
 * print_list - prints elements of linked list
 * @h: list
 * Return: number of nodes including head
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
