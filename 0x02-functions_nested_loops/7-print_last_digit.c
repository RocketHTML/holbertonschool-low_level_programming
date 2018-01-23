#include "holberton.h"

/**
 * print_last_digit - prints last digit
 * @n: The character to be parsed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}
