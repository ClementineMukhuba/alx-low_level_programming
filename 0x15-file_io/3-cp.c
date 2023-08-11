#include "main.h"
#include <stdio.h>

/**
 * error_file - checks errors
 * @from: file from
 * @to: file to
 * @argv: Arguments path
 *
 */
void error_file(int from, int to, char *argv[])
{
	if (from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - copies the content of a file to another file.
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int from, to, error_close;
	ssize_t reschar, reswr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(from, to, argv);
	reschar = 1024;

	while (reschar == 1024)
	{
		reschar = read(from, buff, 1024);
		if (reschar == -1)
			error_file(-1, 0, argv);
		reswr = write(to, buff, reschar);
		if (reswr == -1)
			error_file(0, -1, argv);
	}
	error_close = close(from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	error_close = close(to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}

