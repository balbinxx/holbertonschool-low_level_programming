#include "holberton.h"

/**
 * binary_to_uint - converts binary number to unsigned integer
 * @b: the binary number as a string
 *
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	while (*b)
	{
		if (!b)
			return (0);
		if (*b != '0' && *b != '1')
			return (0);
		n = n * 2 + (*b++ - '0'); /* '0' because it's an int*/
	}
	return (n);
}
