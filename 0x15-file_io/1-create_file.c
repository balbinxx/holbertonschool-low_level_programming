#include "holberton.h"
/**
 * create_file - name
 * @filename: char pointer
 * @text_content: char pointer
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int w = 0; 
	int t = 0; 
	int r = 0;

	
	if (text_content == NULL)
		return (-1);
	if (filename == NULL)
		return (-1);
	
	w = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (w == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[r] != '\0')
			r++;
		t = write(w, text_content, r);
	}
	if (t == -1 || t != r)
		return (-1);
	close(w);
	return (1);
}