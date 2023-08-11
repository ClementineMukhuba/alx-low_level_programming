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
	int fde, res = 1, countn = 0;

	if (!filename)
		return (-1);
	fde = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fde == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[countn])
			countn++;
		res = write(fde, text_content, countn);
	}
	if (res == -1)
		return (-1)
		close(fde);
	return (1);
}
