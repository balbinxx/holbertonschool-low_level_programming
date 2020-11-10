#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to read
 * @letters: number of letters
 *
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t s = 0;
	
	if (filename)
		return (s);

	s = write(STDOUT_FILENO, filename, letters);
	if (s == -1)
		return (0);
	return (s);
}
