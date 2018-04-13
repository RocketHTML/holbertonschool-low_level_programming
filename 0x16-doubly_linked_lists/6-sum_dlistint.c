#include "lists.h"
/**
 * sum_dlistint - sum all data in list
 * @head: head of list
 * Return: int sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *runner = NULL;

	runner = head;
	while (runner)
	{
		sum += runner->n;
		runner = runner->next;
	}
	return (sum);
}
