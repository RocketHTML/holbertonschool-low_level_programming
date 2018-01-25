#include "holberton.h"

/**
 * print_line - prints line of size n
 * @n: size of line
 *
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
