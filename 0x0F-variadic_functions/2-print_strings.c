#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_string - prints string
 * @string: string to print
 * @nil: prints (nil) if nil is 1 and string is null
 * Return: void
 */
void print_string(const char *string, int nil)
{
	int i = 0;

	if (!string && nil)
	{
		print_string("(nil)", 0);
		return;
	}
	else if (!string && !nil)
		return;

	while (*(string + i))
	{
		_putchar(*(string + i));
		i++;
	}
}
/**
 * print_strings - prints variable list of strings
 * @separator: pointer to separated string
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		print_string(va_arg(ap, char *), 1);
		if (i + 1 < n)
			print_string(separator, 0);
	}
	va_end(ap);
	_putchar('\n');
}
