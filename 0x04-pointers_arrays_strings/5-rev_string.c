#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string to splice
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char holder;

	while (*(s + j) != '\0')
		j++;
	j--;

	while (i < j)
	{
		holder = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = holder;
		i++;
		j--;
	}
}
