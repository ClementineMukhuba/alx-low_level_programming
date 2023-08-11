#include "main.h"
#define BUFF_SIZE 1024

/**
 * main - copies the content of a file to another file.
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int from, to, result0, result1;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) *BUFF_SIZE);
	if (!buffer)
		return (0);

	from = open(argv[1], O_RDONLY);
	error_98(from, buffer, argv[1]);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_99(to, buffer, argv[2]);

	do {
		result0 = read(from, buffer, BUFF_SIZE);
		if (result0 == 0)
			break;
		error_98(from, buffer, argv[1])
		result1 = write(to, buffer, result0);
		error_99(to, buffer, argv[2]);
	} while (result 1 >= BUFF_SIZE);
	
	result0 = close(from);
	error_100(result0, buffer);
	result0 = close(to);
	error_100(result0, buffer);

	free(buffer);
	return (0);
}


/**
 * error_98 - file_from error if doesnt exist or cant be read
 * @from: Value to be checked.
 * @buffer: The Buffer.
 * @argv: An argument
 *
 */
void error_98(int from, char *buffer, char *argv)
{
	if (from < 0)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);

	}
}


/**
 * error_99 - file_to error if cant create or write
 * @from: Value to be checked.
 * @buffer: The Buffer.
 * @argv: An argument
 *
 */
void error_99(int from, char *buffer, char *argv)
{
	if (from < 0)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
                        free(buffer);
                        exit(99);
	}
}


/**
 * error_100 - can't close file descriptor error
 * @from: Value to be checked.
 * @buffer: The Buffer.
 *
 */
void error_100(int from, char *buffer)
{
	if (from < 0)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fde %i\n", from);
                        free(buffer);
                        exit(100);
	}
}
