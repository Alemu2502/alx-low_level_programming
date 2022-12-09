#include <stdio.h>
/**
 * main - Start of execution
 * Return: 0(success)
 */
int main(void)
{
	/*
	 * for numbers 0-9
	 */
int x;
int y;

for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
if (x != y && y > x)
{
putchar(x);
putchar(y);
if (x == '8' && y == '9')
	putchar('\n');
else
{
	putchar(',');
	putchar(' ');
}
}
}
}
return (0);
}
