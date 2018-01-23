#include "holberton.h"

/**
 * _isalpha - checks for lowercase character
 * @c: The character to be checked for lowercase
 *
 * Return: 1 if c is a letter. 0 otherwise
 */
int _isalpha(int c)
{
	int result = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');

	return (result);
}
