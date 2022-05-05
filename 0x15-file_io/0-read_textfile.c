#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * @filename: name of the  file to read
 * @letters: length of filed
 * return: if the file can not be opened or read, return 0, if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
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
        if(file == -1)
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
