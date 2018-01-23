#include "holberton.h"

/**
 * jack_bauer - counts every minute of jack bauer
 *
 */
void jack_bauer(void)
{
	int a = -1;
	int b = -1;

	while (++a < 24)
	{
		while (++b < 60)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
		b = -1;
	}
}
