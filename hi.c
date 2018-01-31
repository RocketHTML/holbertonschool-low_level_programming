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
	int len;
	
	str = "Holby";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
