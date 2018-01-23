#include <stdio.h>

/**
 * _putchar(int) - outputs chosen character
 *
 * Return: void
 */
void _putchar(int x)
{
	putchar(x);
}

/**
 * print_alphabet - prints alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
        int i;

        for(i = 0; i < 26; i++)
                _putchar(i + 'a');
        _putchar('\n');
}
