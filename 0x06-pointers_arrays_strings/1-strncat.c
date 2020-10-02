#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: the number of bytes to copy
 *
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	char *lsf = dest;

	while (*dest)
		dest++;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (lsf);
}
