#include "function_pointers.h"

/**
 * array_iterator - execute function
 * @array: array of integers
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned int c;

		for (c = 0; c < size; c++)
			action(array[c]);
	}
}
