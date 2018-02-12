/**
 * _strcat - concatinates two strings
 * @dest: first string in concatination
 * @src: string to be attached to dest
 * Return: returns a pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[i];)
		i++;
	for (; src[j] != '\0';)
		dest[i++] = src[j++];
	dest[i] = src[j];
	return (dest);
}
