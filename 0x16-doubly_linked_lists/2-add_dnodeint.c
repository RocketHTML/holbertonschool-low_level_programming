#include "lists.h"
/**
 * add_dnodeint - add node to beginning of dlist
 * @head: pointer to head
 * @n: data for new node
 * Return: null if fail, pointer to new if success
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

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

	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
