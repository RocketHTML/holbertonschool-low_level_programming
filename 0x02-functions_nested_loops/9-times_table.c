#include "holberton.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 */
void times_table(void)
{
	int row = 0;
	int col = 0;
	int calc = row * col;

	while (row < 10)
	{
		while (col < 10)
		{
			calc = row * col;
			if (col > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (calc < 10)
					_putchar(' ');
			}
			if (calc >= 10)
				_putchar(calc / 10 + '0');
			_putchar(calc % 10 + '0');
			if (col == 9)
				_putchar('\n');
			col++;
		}
		row++;
		col = 0;
	}
}
