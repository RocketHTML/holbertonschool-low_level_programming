#include "lists.h"
/**
 * get_dnodeint_at_index - find node
 * @head: head of list
 * @index: index of node
 * Return: pointer to found node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *runner = NULL;
	unsigned int count = 0;

	runner = head;
	while (runner)
	{
		if (count == index)
			return (runner);
		count++;
		runner = runner->next;
	}
	return (NULL);
}
