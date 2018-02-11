#include <stdio.h>
#include <stdlib.h>
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

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
