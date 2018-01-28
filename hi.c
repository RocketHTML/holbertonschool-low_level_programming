#include <stdio.h>
#include "0x03-more_functions_nested_loops/holberton.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("largest number: %d\n", INT_MAX);
	printf("smallest number: %d\n", INT_MIN);
	print_number(INT_MAX);
	putchar('\n');
	print_number(INT_MIN);
	putchar('\n');
	return (0);
}
