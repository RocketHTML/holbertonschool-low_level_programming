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
	
	reset_to_98(&a);
	printf("a: %d\n", a);
	return (0);
}
