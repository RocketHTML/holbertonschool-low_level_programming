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

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
        int i;
        int j;

        for (j = 0; j < 10; j++)
        {
                for (i = 0; i < 26; i++)
                        _putchar(i + 'a');
                _putchar('\n');
        }
}

/**
 * _abs - returns absolute value
 * @n: The character to be checked for sign
 *
 * Return: absolute value of input
 */
int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = -1 * n;
	}
	else if (n == 0)
	{
		result = 0 * n;
	}
	else
	{
		result = 1 * n;
	}

	return (result);
}
