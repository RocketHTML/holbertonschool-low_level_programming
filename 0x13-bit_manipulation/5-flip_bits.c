#include "holberton.h"
/**
 * flip_bits - count differences of bits
 * @n: number 1
 * @m: number 2
 * Return: bit difference
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0;
	unsigned int v1;
	unsigned int v2;

	while (n | m)
	{
		v1 = n & 1;
		v2 = m & 1;
		if (v1 != v2)
			sum++;
		n = n >> 1;
		m = m >> 1;
	}
	return (sum);
}
