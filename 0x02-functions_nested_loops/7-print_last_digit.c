#include "holberton.h"

/**
 * print_last_digit - prints last digit
 * @n: The character to be parsed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m *= -1;

	_putchar(m + '0');

	return (m);
}
