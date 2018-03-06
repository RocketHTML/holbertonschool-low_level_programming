#include "lists.h"
/**
 * create - creates a node
 * @data: data for new node
 * Return: pointer to new node
 */
listint_t *create(int data)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = data;
	return (new);
}
/**
 * add_nodeint_end - add node to the end of list
 * @head: pointer to head pointer
 * @n: data for new node
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *cursor = *head;

	new = create(n);
	if (!new)
		return (NULL);
	if (!cursor)
	{
		*head = create(n);
		return (*head);
	}
	while (cursor->next)
		cursor = cursor->next;
	cursor->next = new;
	return (cursor->next);
}
