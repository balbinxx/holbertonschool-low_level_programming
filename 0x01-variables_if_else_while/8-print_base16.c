#include <stdio.h>
/**
 * main -Entry point
 * use of putchar to write characters specified by the argument
 * Return: Always 0
 */
int main(void)
{
char x;
char y;
for (x = '0'; x <= '9'; x++)
putchar(x);
for (y = 'a'; y <= 'f'; y++)
putchar(y);
putchar('\n');
return (0);
}
