#include "holberton.h"

/**
 * print_last_digit - prints last digit
 * @n: The character to be parsed
 *
 * Return: absolute value of input
 */
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
