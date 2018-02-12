/**
 * _memcpy - fills the first n bytes of s with b
 * @dest: pointer to destination
 * @src: pointer to src to be copied
 * @n: amount of bytes to copy
 * Return: pointer to s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
