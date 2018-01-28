#include "holberton.h"

/**
 * overflow - prints the left most digit of negative number
 *
 * @n: overflow trigger
 * Return: returns a number trimmed of leftmost bit
 */
int overflow(int n)
{
	int left = n / 1000000000;
	int ret = n % 1000000000;

	if (n < 1000000000 && n > -1000000000)
		return (n);

	if (left < 0)
	{
		_putchar('-');
		if (n > -1000000000)
		{
			n = -n;
			return (n);
		}
		left = -left;
		ret *= -1;
	}
	_putchar(left + '0');
	return (ret);
}

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

	n = overflow(n);

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

}
