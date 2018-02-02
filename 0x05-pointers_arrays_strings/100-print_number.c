#include "holberton.h"

/**
 * print_number - prints a number
 * @n: number to print
 */
void print_number(int n)
{
	int d = 0;
	int div = 1;
	int m = n;
	int c = 0;

	if (n < 0)
		_putchar('-');
	while (n != 0)
	{
		n = n / 10;
		d++;
	}
	while (d > 1)
	{
		div *= 10;
		d--;
	}
	while (div > 0)
	{
		c = m / div;
		if (c < 0)
		c = -c;
		_putchar(c + '0');
		m = m % div;
		div = div / 10;
	}
}
