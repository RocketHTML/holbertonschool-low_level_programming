#include <stdio.h>
#include "0x04-pointers_arrays_strings/holberton.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 5;
	int b = 7;
	
	swap_int(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	return (0);
}
