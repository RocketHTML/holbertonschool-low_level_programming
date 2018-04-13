#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head of list
 * @idx: index to insert
 * @n: data for new node
 * Return: pointer to new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *runner = NULL;
	dlistint_t *new = NULL;

	if (h == NULL)
		return (NULL);

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	runner = *h;
	while (runner)
	{
		if (count + 1 == idx)
		{
			if (runner->next)
			{
				new->next = runner->next;
				new->next->prev = new;
				new->prev = runner;
				runner->next = new;
			}
			else
			{
				runner->next = new;
				new->prev = runner;
			}
			return (new);
		}
		count++;
		runner = runner->next;
	}
	return (NULL);
}
