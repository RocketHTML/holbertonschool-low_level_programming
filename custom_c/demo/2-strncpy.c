/**
 * _strncpy - copies n bytes of string src to dest
 * @dest: destination to copy string
 * @src: source string to be copied
 * @n: number of bytes to copy from src
 * Return: returns pointer to copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
