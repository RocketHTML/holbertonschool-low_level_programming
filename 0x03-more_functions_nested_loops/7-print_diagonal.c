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
	int m = n;

	for (; m > 0; m--)
	{
		for (i = j; i > m; i--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
