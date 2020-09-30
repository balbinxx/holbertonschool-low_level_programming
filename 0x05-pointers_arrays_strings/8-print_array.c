#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints all elements of array
 * @a: the array
 * @n: the array length
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x + 1 < n)
			printf(", ");
	}
	printf("\n");
}
