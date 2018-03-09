#include "holberton.h"
/**
 * set_bit - set bit to 1
 * @n: collection of bits
 * @index: index of bit to set
 * Return: 1 if success -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (!n)
		return (-1);
	while (index)
	{
		mask *= 2;
		index--;
	}
	*n = *n | mask;
	return (1);
}
