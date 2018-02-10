#include "holberton.h"

/**
 * prime - finds prime
 * @n: int to check
 * @y: search counter
 * Return: 1 if prime 0 otherwise
 */
int prime(int n, int y)
{
	if (n % y == 0)
		return (0);
	if (y >= n / 2)
		return (1);
	return (prime(n, y + 1));
}

/**
 * is_prime_number - returns int
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
