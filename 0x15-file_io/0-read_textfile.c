#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the
  *			POSIX standard output
  * @filename: name of file to be read
  * @letters: number of letters it should read and print
  *
  * Return: actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t rlen, wlen;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	rlen = read(fd, buffer, letters);
	close(fd);
	if (rlen == -1)
	{
		free(buffer);
		return (0);
	}

	wlen = write(STDOUT_FILENO, buffer, rlen);
	free(buffer);
	if (rlen != wlen)
		return (0);
	return (wlen);
}
