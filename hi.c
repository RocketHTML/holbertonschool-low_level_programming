#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, NULL);
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}
