#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: void.
 * 
 */
void _putchar(char c)
{
	write(1, &c, 1);
}


