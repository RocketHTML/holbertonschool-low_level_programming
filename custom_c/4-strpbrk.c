/**
 * _strpbrk - returns first occurance of match
 * @s: pointer to start of string to search
 * @accept: set of characters to match
 * Return: pointer to first occurance
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *p = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (s + i);
	}
	return (p);
}
