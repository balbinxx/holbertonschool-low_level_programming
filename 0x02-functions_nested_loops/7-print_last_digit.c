#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @x: number value
 * Return: last digit
 */
int print_last_digit(int x)
{
	int y = x % 10;

	if ( x >= 0)
	{
		_putchar(y + '0');
		return (y);
	}
	else
	{
		y = y * -1;
		_putchar(y + '0');
		return (y);
	}
}
