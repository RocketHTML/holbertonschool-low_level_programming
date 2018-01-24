#include "holberton.h"

/**
 * print_last_digit - prints last digit
 * @n: The character to be parsed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		m = n * -1;
	else
		m = n; 
	_putchar(m % 10 + '0');
	return (m % 10);
}
