#include <stdio.h>

/**
 * leet - leetifies
 * @s: string to leetify
 * Return: pointer to string
 */
char *leet(char *s)
{
	int z[150];
	int i;

	for (z[0] = 0; z[0] <= 148; z[0]++)
		z[z[0] + 1] = 0;
	z['a'] = '4';
	z['e'] = '3';
	z['o'] = '0';
	z['t'] = '7';
	z['l'] = '1';
	z['A'] = '4';
	z['E'] = '3';
	z['O'] = '0';
	z['T'] = '7';
	z['L'] = '1';
	for (i = 0; s[i] != '\0'; i++)
		if (z[(int)s[i]])
		s[i] = z[(int)s[i]];
	return (s);
}
