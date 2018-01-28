#include "stdio.h"
#include "0x03-more_functions_nested_loops/holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int d = 1;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n >= d)
		d *= 10;

	for (d = d / 10; d >= 1; d = d / 10)
	{
		_putchar(n / d + '0');
		n = n % d;
	}
	_putchar('\n');
	return (0);
}
