#include "lists.h"
/**
 * add_nodeint - add node to beginning
 * @head: head of list
 * @n: data for new node
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = create(n);
	if (!new)
		return (NULL);
	new->next = *head;
	*head = new;
	return (*head);
}
