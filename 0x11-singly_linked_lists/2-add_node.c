#include "lists.h"
/**
 * _strlen - count string
 * @s: string to count
 * Return: int
 */
int _strlen(const char *s)
{
	int len = 0;

	if (!s)
		return (0);
	for (len = 0; s[len]; len++)
		;
	return (len);
}
/**
 * add_node - adds new node to beginning
 * @head: head of list to add before
 * @str: string data for new node
 * Return: pointer to new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head || !str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	if (!str)
		new->str = NULL;
	else
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
