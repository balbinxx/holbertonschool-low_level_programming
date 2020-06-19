#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int x;
int last;
srand(time(0));
x = rand() - RAND_MAX / 2;
last = x % 10;
if (last > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", x, last);
}
else if (last == 0)
{
printf("Last digit of %d is %d and is 0\n", x, last);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", x, last);
}
return (0);
}
