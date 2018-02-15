#include <stdlib.h>
/**
 * string_nconcat - returns char pointer
 * @s1: char array
 * @s2: char array
 * @n: unsigned int
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size = 0, i = 0, j = 0, k = 0;
	char *a;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j] && n > j)
		j++;
	size = i + j + 1;
	a = malloc(size * sizeof(*a));
	if (a == 0)
		return (0);
	for (i = 0; s1[i]; i++)
		a[k++] = s1[i];
	for (j = 0; s2[j] && n > j; j++)
		a[k++] = s2[j];
	a[k] = '\0';
	return (a);
}
