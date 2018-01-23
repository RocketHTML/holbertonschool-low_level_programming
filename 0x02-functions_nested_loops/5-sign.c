#include "holberton.h"

/**
 * print_sign - prints sign of a number
 * @n: The character to be checked for sign
 *
 * Return: 1 if +, 0 if 0, -1 if -
 */
int print_sign(int n)
{
	int result;

	if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
	{
		_putchar('+');
		result = 1;
	}

	return (result);
}
