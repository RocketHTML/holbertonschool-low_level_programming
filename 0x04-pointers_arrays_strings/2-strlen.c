#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to string to count
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int j = 0;

	while (*(s + j) != '\0')
		j++;
	return (j);
}
