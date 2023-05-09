#include "main.h"
/**
 * read_textfile - reading textfile
 * @filename: file
 * @letters: content
 * Return: num of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num;
	char *buff;

	if (!filename)
		return (0);
	if (!letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	num = read(fd, &buff[0], letters);
	num = write(STDOUT_FILENO, &buff[0], num);
	close(fd);
	return (num);
}
