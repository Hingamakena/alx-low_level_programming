#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: name of the file
 * @letters: the number of letters to read
 *
 * Return: success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x = 0;
	ssize_t r = 0;
	char *buffer[1024];

	x = open(filename, O_RDONLY);

	r = read(x, buffer[letters], letters);

	x = write(1, buffer[letters], letters);

	return (r);
}
