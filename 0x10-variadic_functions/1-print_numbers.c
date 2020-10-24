#include "variadic_functions.h"


/**
 * print_numbers - prints numbers with separator
 * @separator: the string pointer
 * @n: the number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list rec;

	if (!n)
	{ printf("\n");
		return;
	}

	va_start(rec, n);
	while(i--)
	{
		printf("%d", va_arg(rec, int));

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	va_end(rec);
}
