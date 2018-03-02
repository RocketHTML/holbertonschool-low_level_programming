#include "lists.h"
/**
 * free_list - free's malloc'd elements of list
 * @head: the list
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
