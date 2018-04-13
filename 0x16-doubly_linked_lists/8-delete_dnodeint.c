#include "lists.h"
/**
 * delete_dnodeint_at_index - delete and frees node at index
 * @head: address of head of list
 * @index: index to be deleted
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *runner = NULL;

	if (head == NULL)
		return (-1);

	runner = *head;
	while (runner)
	{
		if (count == index)
		{
			if (runner->prev)
				runner->prev->next = runner->next;

			if (runner->next)
				runner->next->prev = runner->prev;

			if (index == 0)
			{
				if (runner->next)
					*head = runner->next;
				else
					*head = NULL;
			}
			free(runner);
			return (1);
		}
		count++;
		runner = runner->next;
	}
	return (-1);
}
