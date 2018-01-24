#include <stdio.h>
#include <string.h>
#include "0x02-functions_nested_loops/holberton.h"

/**
 * main - Entry point
 * @argc: the size of the list of inputs from command line
 * @argv: the list of string pointers
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *input;
	int i, len, dec = 0, negative = 0;

	if (argc != 2)
	{
		printf("Require commandline argument\n");
		return (1);
	}
	len = strlen(argv[1]);
	input = argv[1];
	for (i = 0; i < len; i++)
	{
		if (*input == 45 && i == 0)
		{
			negative = 1;
			i++;
		}
		dec = dec * 10 + (*(input + i) - '0');
	}
	if (negative)
		dec = dec * -1;
	printf("dec is: %d\n", dec);
	print_to_98(dec);
	return (0);
}
