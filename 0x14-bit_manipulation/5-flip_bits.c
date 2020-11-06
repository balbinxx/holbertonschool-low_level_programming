#include "holberton.h"

/**
 * flip_bits - returns the number of bits that need to flip
 * @n: first bit
 * @m: second bit
 * Return: bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int diff = n ^ m;
	int num = 0;

	while (diff)
	{
		if (diff & 1)
			num++;

		diff >>= 1;
	}
	return (num);
}
