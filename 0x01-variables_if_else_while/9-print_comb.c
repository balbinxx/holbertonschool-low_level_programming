#include <stdio.h>
/**
 * main -Entry point
 * use of putchar to write numbers separated for commas
 * Return: Always 0
 */
int main(void)
{
int x;
for (x = 48; x <= 57; x++)
{
putchar(x);
if (x < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
