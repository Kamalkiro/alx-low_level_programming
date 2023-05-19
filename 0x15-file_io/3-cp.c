#include "main.h"
#define ERROR1 "Usage: cp file_from file_to\n"
#define ERR_2 "Error: Can't read from file %s\n"
#define ERR_3 "Error: Can't write to %s\n"
#define ERR_4 "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - copying
 * @argv: to copy
 * @argc: to check if 3
 * Return: 0 or 97 98 99 100
 */
int main(int argc, char *argv[])
{
	int f1 = 0, f2 = 0;
	ssize_t s;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, ERROR1);
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, ERR_2, argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (f2 == -1)
	{	
		dprintf(STDERR_FILENO, ERR_3, argv[2]);
		exit(99);
	}
	while ((s = read(f1, buff, 1024)) > 0)
		if (write(f2, buff, s) != s)
		{
			dprintf(STDERR_FILENO, ERR_3, argv[2]);
			exit(99);
		}
	if (s == -1)
	{
		dprintf(STDERR_FILENO, ERR_2, argv[1]);
		exit(98);
	}
	f1 = close(f1);
	f2 = close(f2);
	if (f1 != '\0')
	{
		dprintf(STDERR_FILENO, ERR_4, f1);
		exit(100);
	}
	if (f2 != '\0')
	{
		dprintf(STDERR_FILENO, ERR_4, f1);
		exit(100);
	}
	return (EXIT_SUCCESS);
}
