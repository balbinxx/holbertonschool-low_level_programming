#include "holberton.h"
/**
 * jack_bauer - prints 24 hours
 *
 * Return: void
 */
void jack_bauer(void)
{
	int H1, H2, m, s;

	for (H1 = 48; H1 < 51; H1++)
	{
		for (H2 = 48; H2 < 58; H2++)
		{
			for (m = 48; m < 54; m++)
			{
				for (s = 48; s < 58; s++)
				{
					_putchar(H1);
					_putchar(H2);
					_putchar(':');
					_putchar(m);
					_putchar(s);
					_putchar('\n');
				}
			}
			if (H1 == 50 && H2 == 51)
				break;
		}
	}
}
