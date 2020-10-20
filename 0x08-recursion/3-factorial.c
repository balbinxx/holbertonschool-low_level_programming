#include "holberton.h"
#include <stddef.h>

/**
 * factorial - returns factorial of a given number
 * @n: number to factorial
 *
 * Return: the int result or -1 on error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
