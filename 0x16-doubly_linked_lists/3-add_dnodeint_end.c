#include "lists.h"
/**
 * add_dnodeint_end - add node to the end
 * @head: head of list
 * @n: node data
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *runner = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	runner = *head;
	while (runner->next)
		runner = runner->next;
	runner->next = new;
	new->prev = runner;
	return (new);
}
