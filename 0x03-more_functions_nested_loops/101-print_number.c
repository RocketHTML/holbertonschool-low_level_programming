#include "holberton.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 *
 * @n: number to be printed
 */
void print_number(int n)
{
	int d = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n >= d)
	{
		d *= 10;
		if (d == 1000000000)
		{
			_putchar(n / d + '0');
			n = n % d;
			break;
		}
	}
	for (d = d / 10; d >= 1; d = d / 10)
	{
		_putchar(n / d + '0');
		n = n % d;
	}

}
