#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 for success -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0, letterNum = 0, index = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[index])
			index++;
		letterNum = write(fd, text_content, index);
		if (letterNum != index)
			return (-1);
	}

	close(fd);

	return (1);
}
