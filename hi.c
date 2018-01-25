#include <stdio.h>
#include "0x03-more_functions_nested_loops/holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = _isupper('A');
	int j = _isupper('b');
	int k = _isupper('!');

	_putchar(i + '0');
	_putchar(j + '0');
	_putchar(k + '0');
	_putchar('\n');
	return (0);
}
