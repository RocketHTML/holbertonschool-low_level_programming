#include "lists.h"
/**
 * dlistint_len - returns number of nodes
 * @h: head
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *runner = NULL;

	if (h == NULL)
		return (0);

	nodes++;
	runner = h->next;
	while (runner)
	{
		nodes++;
		runner = runner->next;
	}
	return (nodes);
}
