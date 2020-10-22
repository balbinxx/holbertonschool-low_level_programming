#include "function_pointers.h"

/**
 * int_index - Search Int
 * @array: array of integers
 * @size: array size
 * @cmp: function pointer
 * Return: integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	return (-1);
}
