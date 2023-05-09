#include "main.h"

/**
 * _strlen - length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}
/**
 * append_text_to_file - appending text to a file
 * @filename: file
 * @text_content: text
 * Return: 1 or 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		num = write(fd, text_content, len);
	close(fd);
	return (num == len ? 1 : -1);
}
