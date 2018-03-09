#include "holberton.h"
/**
 * clear_bit - clears a bit
 * @n: number to change
 * @index: index of bit to change
 * Return: 1 if success 0 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask = 1;

	if (!n)
		return (-1);
	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	while (index)
	{
		mask *= 2;
		index--;
	}
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
