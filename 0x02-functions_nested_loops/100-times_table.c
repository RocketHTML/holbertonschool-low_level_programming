#include "holberton.h"

/**
 * print_times_table - prints the n times table starting with 0
 *
 * @n: the size of the times table
 */
void print_times_table(int n)
{
	int row = 0;
	int col = 0;
	int calc = row * col;

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
				int digits = 1;
				int divisor = 1;
				int m = calc;

				while (m / divisor >= 10)
				{
					digits++;
					divisor *= 10;
				}
				while (digits-- > 0)
				{
					_putchar(m % (divisor * 10) / divisor + '0');
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
