#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - read a text file and print it to the POSIX standard output
 * @filename: name of the  file to read
 * @letters: length of file
 *
 * return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, lprint, lread, closed;
	char *buffer;

	file = lprint = lread = 0;
	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	lread = read(file, buffer, letters);
	if (lread == -1)
		return (0);
	lprint = write(STDOUT_FILENO, buffer, lread);
	if (lprint == -1)
		return (0);
	closed = close(file);
	if (closed == -1)
		return (0);
	free(buffer);
	return (lread);
}
