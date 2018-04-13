#include "lists.h"
/**
 * free_dlistint - free a dlinked list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *runner = NULL;

	if (head == NULL)
		return;

	runner = head;
	while (runner)
	{
		runner = head->next;
		free(head);
		head = runner;
	}
}
