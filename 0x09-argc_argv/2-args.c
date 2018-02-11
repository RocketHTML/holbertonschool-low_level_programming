#include <stdio.h>
#include "holberton.h"

/**
 * main - program start
 * @argc: size of argv
 * @argv: array of commandline arguments
 * Return: always return 0;
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 0)
		return (1);

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
