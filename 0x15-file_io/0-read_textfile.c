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
	int w;
	char x = 0;
	ssize_t s;
	

	if (!filename || !letters)
		return (0);
	w = open(filename, O_RDONLY);
	if (w == -1)
		return (0);
	return (s);
}
