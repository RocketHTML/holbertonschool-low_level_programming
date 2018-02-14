#include <stdlib.h>
int _strlen(char *s);
/**
 * _strdup - returns duplicate string
 * @str: char array
 * Return: char array
 */
char *_strdup(char *str)
{
	char *a;
	int i;
	int size;

	if (str == 0)
		return (0);
	size = _strlen(str) + 1;
	a = malloc(size);
	if (a == 0)
		return (0);

	for (i = 0; str[i]; i++)
		a[i] = str[i];

	a[i] = str[i];

	return (a);
}
