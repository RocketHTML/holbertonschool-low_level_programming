#include "holberton.h"

/**
 * len - string length
 * @s: string
 * Return: lenth
 */
int len(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: content to fill file with
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int write_status;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	write_status = write(fd, text_content, len(text_content));
	if (!write_status)
		return (-1);
	close(fd);
	return (1);
}
