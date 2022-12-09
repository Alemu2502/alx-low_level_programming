#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: 0(success)
 */
int main(void)
{
	char alpha;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
