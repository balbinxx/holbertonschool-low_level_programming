#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/*base*/
       	if (*s == '\0')
	      	return;
	_print_rev_recursion(s + 1);
	/*Go to the finish first*/
	_putchar(*s);
}
