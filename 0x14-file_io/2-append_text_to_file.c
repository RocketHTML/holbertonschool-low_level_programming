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
 * append_text_to_file - append to a file
 * @filename: name of file to create
 * @text_content: content to fill file with
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_status;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	write_status = write(fd, text_content, len(text_content));
	if (write_status == -1)
		return (-1);

	close(fd);
	return (1);
}
