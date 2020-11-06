#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer that comes from main
 * @index: given index
 * Return: 1 or 0 value found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
