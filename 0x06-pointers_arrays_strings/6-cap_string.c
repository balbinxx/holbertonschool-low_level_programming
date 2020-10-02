#include "holberton.h"
/**
 * cap_string - capitalize words
 * @a: pointer
 * Return: pointer result
 */
char *cap_string(char *a)
{
	int w;

	for (w = 0; a[w] != '\0'; w++)
	{
		if (a[w] >= 97 && a[w] <= 122)
		{
			if (w == 0)
				a[w] -= 32;

			if (a[w - 1] == 9 || a[w - 1] == 10 || a[w - 1] == 32 || a[w - 1] == 33)
				a[w] -= 32;

			if (a[w - 1] == 40 || a[w - 1] == 41 || a[w - 1] == 44 || a[w - 1] == 46)
				a[w] -= 32;

			if (a[w - 1] == 59 || a[w - 1] == 123 || a[w - 1] == 125)
				a[w] -= 32;
		}
	}
	return (a);
}
