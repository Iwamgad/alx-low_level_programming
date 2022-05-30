#include "main.h"

/**
 * read_textfile - reads a text file and prints
 *                 it to the POSIX standard output
 * @filename: a pointer to to a string of 0 and 1 chars
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 *         and returns 0 if the file can not be opened or read,
 *         if filename is NULL, f write fails or does
 *         not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, s, letterNum;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	s = read(fd, buffer, letters);
	if (s < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[s] = '\0';

		close(fd);

	letterNum = write(STDOUT_FILENO, buffer, s);
	if (letterNum < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (letterNum);
}
