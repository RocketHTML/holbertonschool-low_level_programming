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
