#include "holberton.h"

/**
 * swap_int - swaps two integers
 * @a: integer one
 * @b: integer two
 *
 */
void swap_int(int *a, int *b)
{
	int j = *b;
	*b = *a;
	*a = j;
}
