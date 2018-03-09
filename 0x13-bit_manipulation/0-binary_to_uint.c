#include "holberton.h"
/**
 * power - returns power
 * @base: base
 * @y: power
 * Return: powered n
 */
unsigned int power(unsigned int base, unsigned int y)
{
	unsigned int d = 1;

	while (y)
	{
		d *= base;
		y--;
	}
	return (d);
}
/**
 * binary_to_uint - change binary to int
 * @b: string of binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int len = 0;
	unsigned int d = 1;
	unsigned int i = 0;

	if (!b || !*b)
		return (0);
	while (b[len])
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		len++;
	}

	/*d = power(2, len - 1);*/
	d = d << (len - 1);
	while (b[i])
	{
		sum += (b[i] - '0') * d;
		d >>= 1;
		i++;
	}
	return (sum);
}
