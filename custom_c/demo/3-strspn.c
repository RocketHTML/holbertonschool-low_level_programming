/**
 * _strspn - returns length of matched prefix
 * @s: pointer to start of string to compare
 * @accept: set of characters to match
 * Return: length of matched prefix characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;
	int c;

	for (i = 0; s[i]; i++)
	{
		c = count;
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		if (c == count)
			break;
	}
	return (count);
}
