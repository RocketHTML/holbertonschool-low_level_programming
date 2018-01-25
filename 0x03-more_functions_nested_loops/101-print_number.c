#include "holberton.h"

/**
 * print_number - prints integer
 * @n: integer to print
 *
 */
void print_number(int n)
{
	if (n >= 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
