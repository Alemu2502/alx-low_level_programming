#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: write a program that prints all possible
 * different combination of two digits
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b_c;
	int d_c;

	int a2;
	int b_c2;
	int d_c2;

	while (a <= 98)
	{
		b_c = (a / 10 + '0');
		d_c = (a % 10 + '0');
		a2 = 0;
		while (a2 <= 99)
		{
			b_c2 = (a2 / 10 + '0');
			d_c2 = (a2 % 10 + '0');
			if (a < a2)
			{
				putchar(b_c);
				putchar(d_c);
				putchar(' ');
				putchar(b_c2);
				putchar(d_c2);
				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a2++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
