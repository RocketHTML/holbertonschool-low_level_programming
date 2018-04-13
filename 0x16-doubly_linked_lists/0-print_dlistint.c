#include "lists.h"
/**
 * print_dlistint - prints all elements of dlist
 * @h: head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *runner = NULL;

	if (h == NULL)
		return (0);
	nodes++;
	printf("%d\n", h->n);
	runner = h->next;
	while (runner)
	{
		nodes++;
		printf("%d\n", runner->n);
		runner = runner->next;
	}
	return (nodes);
}
