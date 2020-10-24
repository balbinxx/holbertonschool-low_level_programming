#include "variadic_functions.h"

/**
 * sum_them_all - sum all integers given by n
 * @n: constant int given by main
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int suma = 0, i = n;
	va_list ap;

	if (!n)
		return (0);

	va_start(ap, n);
	while (i--)
		suma += va_arg(ap, int);
	va_end(ap);
	return (suma);
}
