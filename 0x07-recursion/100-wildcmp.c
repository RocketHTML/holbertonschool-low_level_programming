/**
 * suffix_substring - returns 1 if suffix substring k exists
 * @s: string to search
 * @k: suffix to look for
 * Return: 1 if suffix exists, 0 otherwise
 */
int suffix_substring(char *s, char *k)
{
	char *kk = k;
	char *ss = s;

	do {
		s = ss;
		while (*s == *k)
		{
			if (*s == '*')
				break;
			if (*s == '\0' && *k == '\0')
				return (1);
			s++;
			k++;
		}

		if (*k == '*')
		{
			if (*(k + 1) == '\0')
				return (1);
			else
				return (suffix_substring(s, ++k));
		}

		if (*ss == 0)
			return (0);

		k = kk;
		ss++;
	} while (*ss);

	return (0);
}


/**
 * wildcmp - returns 1 if s1 equals s2 (Accepts * wildcard in s2)
 * @s1: pointer to string to search
 * @s2: pointer to string to compare with s1
 * Return: 1 if equal, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s2 == '*')
			return (suffix_substring(s1, s2));
		if (*s1 != *s2)
			return (0);
		if (*s1 == 0 && *s2 == 0)
			return (1);
		s1++;
		s2++;
	}
}
