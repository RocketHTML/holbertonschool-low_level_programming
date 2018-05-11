/**
 *_strchr - finds first instance of c in *s
 *@s: pointer to string to search
 *@c: character to search for
 *Return: returns pointer to first instance of c
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p = 0;

	for (i = 0; s[i] != 0; i++)
		if (s[i] == c)
			return (s + i);
	if (c == 0)
		return (s + i);
	return (p);
}
