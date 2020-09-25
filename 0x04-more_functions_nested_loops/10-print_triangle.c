#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - x - 1; y++)
			_putchar(' ');
		for (y = 0; y < x + 1; y++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
