#include <stdio.h>
#include "0x05-pointers_arrays_strings/holberton.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_number(98);
    putchar('\n');
    print_number(INT_MAX);
    putchar('\n');
    print_number(INT_MIN);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return (0);
}
