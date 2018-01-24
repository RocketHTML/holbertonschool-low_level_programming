#include "holberton.h"

/**
 * print_times_table - prints the n times table starting with 0
 *
 * @n: the size of the times table
 */
void print_times_table(int n)
{
	int row = 0, col = 0, calc, m, digits = 1, divisor = 1;

	while (row <= n && n > 0 && n <= 15)
	{
		while (col <= n)
		{
			calc = row * col;
			if (col > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (calc < 100)
					_putchar(' ');
				if (calc < 10)
					_putchar(' ');
			}
			{
				digits = 1;
				divisor = 1;

				while (calc / divisor >= 10)
				{
					digits++;
					divisor *= 10;
				}
				while (digits-- > 0)
				{
					m = calc % (divisor * 10) / divisor;
					_putchar(m + '0');
					divisor /= 10;
				}
			}
			if (col++ == n)
				_putchar('\n');
		}
		row++;
		col = 0;
	}
}
