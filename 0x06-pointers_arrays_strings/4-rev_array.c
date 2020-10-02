#include "holberton.h"
/**
 * reverse_array - reverse an integer array
 * @a: integer array
 * @n: size
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, lsf;

	for (x = 0; x < n / 2; x++)
	{
		lsf = *(a + x);
		*(a + x) = *(a + n - x - 1);
		*(a + n - x - 1) = lsf;
	}
}
