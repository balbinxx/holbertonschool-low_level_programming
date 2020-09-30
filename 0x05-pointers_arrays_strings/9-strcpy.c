#include "holberton.h"
/**
 * _strcpy - copy string to dest
 * @src: source string
 * @dest: destined string copy
 * Return: (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int x, n;

	x = 0;
	while (src[x])
	{
		x++;
	}

	for (n = 0; n <= x; n++)
	{
		dest[n] = src[n];
	}

	return (dest);
}
