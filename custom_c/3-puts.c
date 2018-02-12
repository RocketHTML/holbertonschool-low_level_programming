#include "holberton.h"

/**
 * _puts - print a string
 * @str: pointer to string to
 *
 */
void _puts(char *str)
{
	int j = 0;

	while (*(str + j) != '\0')
		_putchar(*(str + j++));
	_putchar('\n');
}
