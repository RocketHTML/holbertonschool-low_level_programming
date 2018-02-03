/**
 * rot13 - encrypts string into rot13
 * @s: pointer to string
 * Return: returns pointer to encrypted string
 */
char *rot13(char *s)
{
	int i;
	int c;
	int u, v, uu, vv, found;

	for (i = 0; s[i] != '\0'; i++)
	{
		uu = 0; /* true if upper case */
		vv = 0; /* true if lower case */
		c = 0;  /* 65 for uppercase, 97 for lowercase */
		u = s[i] - 65;
		v = s[i] - 97;
		uu = (u >= 0) && (u < 26);
		vv = (v >= 0) && (v < 26);
		found = (uu && (c = 65)) || (vv && (c = 97)); /* true if we found a letter */
		found += found && (s[i] = (((s[i] - c) + 13) % 26) + c);
	}
	return (s);
}
