#include "holberton.h"
/**
 * _strlen - returns length of a string
 * @s: string length to check
 *
 * Return: int length of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s++)
		x++;
	return (x);
}
