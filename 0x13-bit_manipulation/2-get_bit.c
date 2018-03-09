#include "holberton.h"
/**
 * get_bit - get bit at particular index
 * @n: number to traverse
 * @index: index of bit
 * Return: the value of the bit, or -1 if failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x = 0;

	while (index + 1 > 0)
	{
		if (!n)
			return (-1);
		x = n & 1;
		if (!index)
			return (x);
		index--;
		n = n >> 1;
	}
	return (-1);
}
