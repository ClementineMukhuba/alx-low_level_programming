#include "main.h"

/**
 * create_file - creates a file.
 * @filename: Name of the file to create
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on sucess or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, _write, countn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (countn = 0; text_content[countn];)
			countn++;

	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(file, text_content, countn);

	if(file == -1 || res == -1)

		return (-1);
		
	close(file);

	return (1);
}
