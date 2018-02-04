/**
 * _strncat - concatinates two strings
 * @dest: first string in concatination
 * @src: string to be attached to dest
 * @n: number of bytes to take from src
 * Return: returns pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; dest[i];)
		i++;
	for (; j < n - 1 && src[j];)
		dest[i++] = src[j++];
	if (j == n - 1)
		dest[i++] = src[j++];
	return (dest);
}
