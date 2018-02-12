/**
 * _memset - fills the first n bytes of s with b
 * @s: pointer to destination
 * @b: byte to copy
 * @n: amount of times to copy b
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
