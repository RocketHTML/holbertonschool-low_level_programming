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
	char s1[98];
	char *p;

	p = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", p);
	return (0);
}
