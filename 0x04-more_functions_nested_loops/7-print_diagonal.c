#include "holberton.h"
/**
 * print_diagonal - print a diagonal line n characters long
 * @n: the extent of the line
 * Return: void
 */
void print_diagonal(int n)
{
	int x, j;

	for (x = 0; x < n; x++)
	{
		for (j = 0; j < x; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
