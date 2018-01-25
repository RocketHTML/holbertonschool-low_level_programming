#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c)
{
	int result = c > 64 && c < 91;

	return (result);
}
