#include "lists.h"
/**
 * free_listint - free a list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
