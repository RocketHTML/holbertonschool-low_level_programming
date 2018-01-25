#include "holberton.h"

/**
 * print_diagonal - prints line of size n
 * @n: size of line
 *
 */
void print_diagonal(int n)
{
	int i;
	int j = n;

	for (; n > 0; n--)
	{
		for (i = j; i > n; i--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
