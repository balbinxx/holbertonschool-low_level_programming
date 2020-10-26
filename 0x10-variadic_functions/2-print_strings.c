#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings given by
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list rec;

	va_start(rec, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(rec, char *);

		if (!ptr)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(rec);
	printf("\n");
}
