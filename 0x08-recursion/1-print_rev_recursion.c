#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;

	for (x--; x >= 0; x--)
		putchar(s[x]);

	putchar('\n');
}
