#include "holberton.h"
/**
 * _islower - checks lowercase char
 * @c: character to test
 * Return: 1 if is lowercase
 * 0 if is not
 */
int _islower(int c)
{
	if (c > 96 && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
