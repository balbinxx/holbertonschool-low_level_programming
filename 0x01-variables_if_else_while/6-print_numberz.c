#include <stdio.h>
/**
 * main -Entry point
 * use of putchar to write characters specified by the argument
 * Return: Always 0
 */
int main(void)
{
short x;
for (x = '0'; x <= '9'; x++)
putchar(x);
putchar('\n');
return (0);
}
