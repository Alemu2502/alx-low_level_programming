#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 */
void jack_bauer(void)
{
	int a1;
	int a2;
	int b1;
	int b2;
	int c = 9;

	a2 = 0;

	while (a2 <= 2)
	{
		if (a2 == 2)
		{
			/*Restrain to 23h, not 29*/
			c = 3;
		}
		a1 = 0;
		while (a1 <= c)
		{
			b2 = 0;
			while (b2 <= 5)
			{
				b1 = 0;
				while (b1 <= 9)
				{
					_putchar('0' + a2);
					_putchar('0' + a1);
					_putchar(':');
					_putchar('0' + b2);
					_putchar('0' + b1);
					_putchar('\n');
					b1++;
				}
				b2++;
			}
			a1++;
		}
		a2++;
	}
}
		   
