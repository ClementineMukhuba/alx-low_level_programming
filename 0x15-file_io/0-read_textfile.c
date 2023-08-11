#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: Name of the file to read
 * @letters:  Numbers of letters to read
 *
 * Return: the actual number of letters or 0 on Fail
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fde;
	ssize_t _read, _write;

	char *buffer;
	
	fde = open(filename, O_RDONLY);
	if (fde == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	_read = read(fde, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	free(buffer);
	close(fde);
	return (_write)
}

