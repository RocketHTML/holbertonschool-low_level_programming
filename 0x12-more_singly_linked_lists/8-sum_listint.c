#include "lists.h"
/**
 * sum_listint - sums ints throughout the list
 * @head: pointer to list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cursor;

	cursor = head;
	while (cursor)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
