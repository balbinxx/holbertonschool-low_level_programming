#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: array size
 * @c: char of initialitation
 * Return: Pointer to the array
 */
char *create_array(unsigned int size, char c)
{
        unsigned int i;
	char *ptr = NULL;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
	}
	else
	{
		return (NULL);
	}

	return (ptr);
}
