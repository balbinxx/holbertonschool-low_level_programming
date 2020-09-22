#include "holberton.h"
/**
 * _islower - checks lowercase char
 * Return: 1 if is lowercase and 0 if is not
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
