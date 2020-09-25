#include "holberton.h"
#include <stdio.h>
/**
 * main - Fizz-Buzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (!(i % 15))
			printf("FizzBuzz ");
		else if (!(i % 5))
			printf("Buzz ");
		else if (!(i % 3))
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
