#include "holberton.h"

/**
 * _abs - returns absolute value
 * @n: The character to be checked for sign
 *
 * Return: absolute value of input
 */
int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = -1 * n;
	}
	else if (n == 0)
	{
		result = 0 * n;
	}
	else
	{
		result = 1 * n;
	}

	return (result);
}
