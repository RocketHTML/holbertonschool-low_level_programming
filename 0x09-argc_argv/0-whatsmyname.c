#include <stdio.h>
#include "holberton.h"

/**
 * print_argv - returns void
 * @argc: int
 * @argv: char array array
 * Return: void
 */
void print_argv(int argc, char **argv)
{
	printf("%s\n", *argv);
}

/**
 * main - program start
 * @argc: size of argv
 * @argv: array of commandline arguments
 * Return: always return 0;
 */
int main(int argc, char *argv[])
{
	print_argv(argc, argv);
	return (0);
}
