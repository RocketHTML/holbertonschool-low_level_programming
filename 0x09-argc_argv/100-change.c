#include <stdio.h>

/**
 * noloop - returns coins
 * @n: cash
 * Return: coins
 */
int noloop(int n)
{
	int x;
	int y;

	x = n / 25;
	y = n % 25;
	x += y / 10;
	y = y % 10;
	x += y / 5;
	y = y % 5;
	x += y / 2;
	y = y % 2;
	x += y;
	return (x);
}

/**
 * main - program start
 * @argc: number of commandline arguments
 * @argv: array of arrays
 * Return: always 0 unless broken (1)
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", noloop(n));
	return (0);
}

