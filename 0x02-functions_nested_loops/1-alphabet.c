#include "holberton.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
		_putchar(i + 'a');
	_putchar('\n');
}
