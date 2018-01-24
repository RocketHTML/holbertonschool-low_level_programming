#include "holberton.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: starting point for the count
 *
 * Return: result of addition
 */
void print_to_98(int n)
{
	int increment = n < 98 ? 1 : -1;
	int negative = n < 0 ? 1 : 0;
	int m = n;

	while (n != 98)
	{
		m = n;
		negative = n < 0 ? 1 : 0;
		if (negative)
		{
			_putchar('-');
			m = n * -1;
		}
		{
			int digits = 1;
			int divisor = 1;

			while (m / divisor >= 10)
			{
				digits++;
				divisor *= 10;
			}
			while (digits > 0)
			{
				_putchar(m % (divisor * 10) / divisor + '0');
				digits--;
				divisor /= 10;
			}
		}
		_putchar(',');
		_putchar(' ');
		n = n + increment;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
