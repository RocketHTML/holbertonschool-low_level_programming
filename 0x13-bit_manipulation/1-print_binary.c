#include "holberton.h"
/**
 * print_binary - print num as binary
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int print;

	print = n & 1;
	n = n >> 1;
	if (n > 0)
		print_binary(n);
	_putchar(print + '0');
}
