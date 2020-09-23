#include <stdio.h>
/**
 * main - fibonacci to 50
 * Return: 0
 */
int main(void)
{
	int x = 1, y = 2, res = 0;
	int z;

	while (y < 4000000)
	{
		if (y % 2 == 0)
			res += y;

		z = y;
		y += x;
		x = z;
	}
	printf("%d\n", res);
	return (0);
}
