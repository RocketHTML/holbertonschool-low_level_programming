#include "holberton.h"

/**
 * print_line - prints line of size n
 * @n: size of line
 *
 */
void print_line(int n)
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
