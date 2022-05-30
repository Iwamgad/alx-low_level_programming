#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename:  is the name of the file
 * @text_content: is the NULL terminated string
 *                to add at the end of the file
 * Return: 1 on Success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, t = 0, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY |  O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}
	close(fd);

	return (1);
}
