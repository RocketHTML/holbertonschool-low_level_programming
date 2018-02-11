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
	if (argc == 0)
		return (1);
	printf("%s\n", *argv);
	return (0);
}
