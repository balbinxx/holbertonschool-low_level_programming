#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - x98x578xx
 * @argc: number of args
 * @argv: argument
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int x;

	if (argc != 2)
		printf("Error\n"), exit(1);
	x = atoi(argv[1]);
	if (x < 0)
		printf("Error\n"), exit(2);

	while (x--)
		printf("%02hhx%s", *ptr++, x ? " " : "\n");
	return (0);
}
