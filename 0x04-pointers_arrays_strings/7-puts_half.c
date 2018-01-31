#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a newline
 * @str: pointer to string to splice
 *
 */
void puts_half(char *str)
{
	int size;
	int lt;
	int rt;
	int i;

	for (size = 0; *(str + size) != '\0'; size++)
	{
		rt = (size + 1) / 2;
		lt = (size + 1) - rt;
	}
	for (i = 0; i < lt + rt; i++)
	{
		if (i < lt)
			continue;
		_putchar(*(str + i));
	}
	_putchar('\n');
}
