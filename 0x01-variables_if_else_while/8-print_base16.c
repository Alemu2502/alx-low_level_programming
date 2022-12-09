#include <stdio.h>
/**
 * main - Start of program execution
 * Return: 0(success)
 */
int main(void)
{
	char num;
	char low;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
