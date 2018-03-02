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
 * add_node_end - add node to the end of list
 * @head: pointer to head
 * @str: data for new node
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *p;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	if (!str)
		new->str = NULL;
	else
	{
		new->str = malloc(sizeof(char) * _strlen(str));
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->str = strdup(str);
	}
	new->len = _strlen(str);
	new->next = NULL;
	p = *head;
	if (p)
	{
		while (p->next)
			p = p->next;
		p->next = new;
	}
	else
		*head = new;
	return (new);
}
