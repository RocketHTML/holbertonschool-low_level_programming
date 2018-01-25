#include "holberton.h"

/**
 * print_triangle - prints triangle of specified size
 * @size: size of triangle
 *
 */
void print_triangle(int size)
{
	int i, j, row = 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - row; j++)
			_putchar(' ');
		for (j = 0; j < row; j++)
			_putchar('#');
		_putchar('\n');
		row++;
	}
	if (size <= 0)
		_putchar('\n');
}
