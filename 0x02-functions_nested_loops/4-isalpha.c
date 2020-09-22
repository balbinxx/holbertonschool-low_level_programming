#include "holberton.h"
/**
 * _isalpha - checks if char is a letter
 * @c: character to test
 * Return: 1 if is a letter
 * 0 if is not
 */
int _isalpha(int c)
{
	if (c > 65 && c < 91)
	{
		else if (c > 96 && c < 122)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
