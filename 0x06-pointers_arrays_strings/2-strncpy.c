#include "holberton.h"

/**
 * _strncpy - copies a string from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *lsf = dest;

	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (lsf);
}
