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
	char *str;
	
	str = "Holby";
	print_rev(str);
	return (0);
}
