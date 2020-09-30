#include "holberton.h"
/**
 * puts_half - prints half the string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int x, l;

	for (l = 0; str[l]; l++)
		;
	for (x = l / 2 + (l % 2 ? 1 : 0); x < l; x++)
		_putchar(str[x]);
	_putchar('\n');
}
