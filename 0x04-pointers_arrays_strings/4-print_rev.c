#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: pointer to string to reverse
 *
 */
void print_rev(char *s)
{
	int j = 0;

	if (*(s + j) == '\0')
	{
		_putchar('\n');
		return;
	}

	while (*(s + j) != '\0')
		j++;
	j--;

	while (j >= 0)
	{
		_putchar(*(s + j--));
	}
	_putchar('\n');
}
