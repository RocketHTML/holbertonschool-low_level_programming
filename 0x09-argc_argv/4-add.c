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
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
