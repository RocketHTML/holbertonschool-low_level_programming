#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked for lowercase
 *
 * Return: 1 if c is lower. 0 otherwise
 */
int _islower(int c)
{
	int result = c >= 'a' && c <= 'z';

	return (result);
}
