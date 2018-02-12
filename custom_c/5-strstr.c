/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to look for
 * Return: pointer to occurance or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *p = 0;

	for (i = 0; haystack[i]; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (p);
}
